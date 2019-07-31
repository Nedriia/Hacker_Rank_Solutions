#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	N % 2 == 1 || (N > 5 && N < 21) ? std::cout << "Weird" << std::endl : std::cout << "Not Weird" << std::endl;
	return 0;
}
