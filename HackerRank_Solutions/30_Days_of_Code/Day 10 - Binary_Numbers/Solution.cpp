#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n, result = 0, s = 0;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			result++;
			if (result > s)
				s = result;
		}
		else
		{
			result = 0;
		}
		n /= 2;
	}
	std::cout << s << std::endl;
	return 0;
}
