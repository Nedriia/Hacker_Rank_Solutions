#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
	int temp = 0;
	if (a > temp)
		temp = a;
	if (b > temp)
		temp = b;
	if (c > temp)
		temp = c;
	if (d > temp)
		temp = d;
	//
	return temp;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}

