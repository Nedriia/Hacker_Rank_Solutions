#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
	int people = 5;
	int cumulative = 0;
	for (int i = 0; i < n; i++)
	{
		if (cumulative != 0)
			people *= 3;
		people = people / 2;
		cumulative += people;
	}
	return cumulative;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = viralAdvertising(n);

	fout << result << "\n";

	fout.close();

	return 0;
}
