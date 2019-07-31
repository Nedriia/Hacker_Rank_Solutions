#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int m, input;
	cin >> m;
	vector<int> sorted;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		sorted.push_back(input);
	}
	int n, val;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> val;

		vector<int>::iterator low = lower_bound(sorted.begin(), sorted.end(), val);

		if (sorted[low - sorted.begin()] == val)
			cout << "Yes " << (low - sorted.begin() + 1) << endl;
		else
			cout << "No " << (low - sorted.begin() + 1) << endl;
	}
	return 0;
}
