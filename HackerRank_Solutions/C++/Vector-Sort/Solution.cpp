#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size;
	cin >> size;
	vector<int> value;
	int input;
	while (cin >> input)
		value.push_back(input);

	sort(value.begin(), value.end());
	for (int i = 0; i < value.size(); i++)
	{
		cout << value[i] << " ";
	}
	return 0;
}
