#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int numberOfSwaps = 0;
	cin >> n;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	// Write Your Code Here
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				numberOfSwaps++;
				//std::cout << *a.end()<<std::endl;
			}
		}
	}
	std::cout << "Array is sorted in " << numberOfSwaps << " swaps." << std::endl;
	std::cout << "First Element: " << *a.begin() << std::endl;
	std::cout << "Last Element: " << a.back() << std::endl;
	return 0;
}

