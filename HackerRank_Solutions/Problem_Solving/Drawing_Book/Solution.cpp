#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
	//N -> pages number
	//p -> pages to go

	//If N odd -> page final front
	 //else
			//both side
	int index = 1;
	int min = 0;

	if (p > (n / 2))
	{
		//Start from the end
		for (index = n; index > 0; index -= 2)
		{
			if (n % 2 != 0) {
				if (index == p || index - 1 == p)
					break;
			}
			else {
				if (index == p || index + 1 == p)
					break;
			}
			min++;
		}
	}
	else
	{
		//Start from the start
		for (index = 1; index < n; index += 2)
		{
			if (index != 1) {
				if (index == p || index - 1 == p)
					break;
			}
			else {
				if (index == p)
					break;
			}
			min++;
		}
	}
	return min;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int p;
	cin >> p;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = pageCount(n, p);

	fout << result << "\n";

	fout.close();

	return 0;
}
