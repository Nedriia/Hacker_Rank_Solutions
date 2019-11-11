#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
	int result = 0;
	int compare = n;
	while (n > 0)
	{
		if (n % 10 != 0)
		{
			if ((compare % (n % 10)) == 0)
				result++;
		}
		n /= 10;
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int t_itr = 0; t_itr < t; t_itr++) {
		int n;
		cin >> n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		int result = findDigits(n);

		fout << result << "\n";
	}

	fout.close();

	return 0;
}
