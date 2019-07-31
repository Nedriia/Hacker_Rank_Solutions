#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int num)
{
	if (num == 0 || num == 1)
		return false;
	for (int i = 2; i*i <= num; i++)
	{
		if (num%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		bool isPrime = true;
		int a;
		cin >> a;
		if (check(a))
			cout << "Prime\n";
		else
			cout << "Not prime\n";
	}
	return 0;
}
