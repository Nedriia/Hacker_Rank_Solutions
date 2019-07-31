#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);

	vector<int> result;
	int number;
	while (ss >> number)
	{
		result.push_back(number);
		if (ss.peek() == ',')
			ss.ignore();
	}
	return result;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}

