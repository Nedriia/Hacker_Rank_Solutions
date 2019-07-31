#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <iterator>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, q;
	cin >> n >> q;

	vector<vector<int>> all_numbers(n);

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;

		all_numbers[i].resize(k);

		for (int j = 0; j < k; j++)
		{
			cin >> all_numbers[i][j];
		}
	}

	for (int queries = 0; queries < q; queries++)
	{
		int a, b;
		cin >> a >> b;
		cout << all_numbers[a][b] << endl;
	}
	return 0;
}

