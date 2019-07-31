#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
	for (int j = 1; j <= n; j++)
	{
		string s(n - j, ' ');
		string ss(j, '#');
		cout << s << ss << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	staircase(n);

	return 0;
}
