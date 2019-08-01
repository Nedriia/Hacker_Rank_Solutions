#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
	std::map<int, int> countMap;

	// Iterate over the vector and store the frequency of each element in map
	for (auto & elem : arr)
	{
		auto result = countMap.insert(std::pair<int, int>(elem, 1));
		if (result.second == false)
			result.first->second++;
	}
	int max = 0, index = 0;
	for (auto & elem : countMap)
	{
		// If frequency count is greater than 1 then its a duplicate element
		if (elem.second > 1)
		{
			if (elem.second > max)
			{
				max = elem.second;
				index = elem.first;
			}
		}
	}
	int delete_ = 0;
	if (countMap.size() != arr.size())
	{
		for (auto it = arr.begin(); it != arr.end(); ++it)
		{
			if (*it != index)
				delete_++;
		}
		return delete_;
	}
	else
		return arr.size() - 1;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split_string(arr_temp_temp);

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	int result = equalizeArray(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
