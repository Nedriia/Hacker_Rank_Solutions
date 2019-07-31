#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int d, m, y;
	int d_r, m_r, y_r;
	cin >> d >> m >> y;
	cin >> d_r >> m_r >> y_r;
	int fine = 0;

	if (y_r == y)
	{
		if (d <= d_r)
			cout << fine;
		else if (d > d_r && m == m_r)
		{
			fine = 15 * (d - d_r);
			cout << fine;
		}
		else
		{
			fine = 500 * (m - m_r);
			cout << fine;
		}
	}
	else if (y > y_r)
	{
		fine = 10000;
		cout << fine;
	}
	else
		cout << fine;
	return 0;
}
