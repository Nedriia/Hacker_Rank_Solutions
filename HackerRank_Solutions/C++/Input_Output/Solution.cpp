#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int value = 0, sum = 0;
	while (cin >> value)
		sum += value;
	cout << sum << endl;
	return 0;
}
