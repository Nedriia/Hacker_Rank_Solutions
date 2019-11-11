#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<int> cutTheSticks(vector<int> &arr) {
	std::vector<int> tmp;
	int cut = 0;

	while (arr.size() > 0) {
		//Look for the minimum -> we'll cut sticks with this value
		int min = arr[std::distance(arr.begin(), std::min_element(arr.begin(), arr.end()))];
		//While it's negatif or equal to 0 -> we erase it and we look for another minimum value
		while (min <= 0 && arr.size() > 0) {
			std::vector<int>::iterator found = std::find(arr.begin(), arr.end(), min);
			if (found != arr.end())
				arr.erase(arr.begin() + std::distance(arr.begin(), found));
			min = arr[std::distance(arr.begin(), std::min_element(arr.begin(), arr.end()))];
		}
		//We cut the sticks by the minimum value we previously found 
		for (auto it = arr.begin(); it != arr.end(); ++it, ++cut)
			arr[std::distance(arr.begin(), it)] -= min;
		//We can store how much sticks we cut              
		if (cut != 0) {
			tmp.push_back(cut);
			cut = 0;
		}
	}
	return tmp;
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

	vector<int> result = cutTheSticks(arr);

	for (int i = 0; i < result.size(); i++) {
		fout << result[i];

		if (i != result.size() - 1) {
			fout << "\n";
		}
	}

	fout << "\n";

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
