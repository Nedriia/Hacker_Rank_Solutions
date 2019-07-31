#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
	int result = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isupper(s[i]))
			result++;
	}
	return result + 1;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	int result = camelcase(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
