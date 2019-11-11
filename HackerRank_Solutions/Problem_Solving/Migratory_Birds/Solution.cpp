#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
std::map<int, int>countMap;

int birdIndex = 0;
int maxKey = 0;

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
	//Write the lowest id of a bird seen at least twice
	for (auto it = arr.begin(); it != arr.end(); ++it) {
		auto result = countMap.insert(std::pair<int, int>(*it, 1));
		if (result.second == false) { //if already exists we can iterate
			result.first->second++;
		}
	}

	for (auto it = countMap.begin(); it != countMap.end(); ++it) {
		//std::cout << it->first << " " << it->second << std::endl;
		if (it->second > 2) {
			if (birdIndex != 0) {
				if (maxKey < it->second)
				{
					//it means we have more birds of this type
					maxKey = it->second;
					birdIndex = it->first;
				}
			}
			else {
				maxKey = it->second;
				birdIndex = it->first;
			}
		}
	}
	return birdIndex;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string arr_count_temp;
	getline(cin, arr_count_temp);

	int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(arr_count);

	for (int i = 0; i < arr_count; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	int result = migratoryBirds(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}
