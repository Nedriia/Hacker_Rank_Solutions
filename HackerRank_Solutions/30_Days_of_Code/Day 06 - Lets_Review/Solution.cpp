#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T;
	cin >> T;

	vector<string> chain;
	string word;
	vector<char> odd;

	for (int i = 0; i < T; i++)
	{
		cin >> word;
		chain.push_back((word));
	}
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < chain[i].size(); j++)
		{
			if (j % 2 == 0)
			{
				std::cout << chain[i][j];
			}
			else
			{
				odd.push_back(chain[i][j]);
			}
		}
		std::cout << " ";
		for (int k = 0; k < odd.size(); k++)
			std::cout << odd[k];
		std::cout << "" << std::endl;
		odd.clear();
	}
	return 0;
}
