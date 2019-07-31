#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	int size;
	cin >> size;
	set<int> queries;
	int value;
	for (int i = 0; i < size; i++)
	{
		int y;
		int x;
		cin >> y >> x;
		if (y == 1)
			queries.insert(x);
		else if (y == 2)
			queries.erase(x);
		else
			if (queries.end() == queries.find(x))
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
	}
	return 0;
}