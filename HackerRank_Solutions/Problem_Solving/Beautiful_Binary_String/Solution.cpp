#include <bits/stdc++.h>
using namespace std;


// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
	int result = 0;


	for (int i = 0; i < b.size(); ++i) {
		size_t find = b.find("010", i);
		if (find != string::npos)
		{
			std::cout << find << std::endl;
			b[find + 1] = 0;
			i = find;
			find++;
			result++;
		}
	}
	return result;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string b;
	getline(cin, b);

	int result = beautifulBinaryString(b);

	fout << result << "\n";

	fout.close();

	return 0;
}
