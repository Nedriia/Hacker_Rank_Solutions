#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int size;
	cin >> size;

	vector<long> value;
	int input;

	int check = 0;
	while (cin >> input && check < size)
	{
		value.push_back(input);
		check++;
	}

	int first_query = input;
	value.erase(value.begin() + first_query - 1);

	int scd_queryMin, scd_queryMax;
	cin >> scd_queryMin;
	cin >> scd_queryMax;
	value.erase(value.begin() + scd_queryMin - 1, value.begin() + scd_queryMax - 1);

	std::cout << value.size() << std::endl;
	for (int i = 0; i < value.size(); i++)
		std::cout << value[i] << " ";
	return 0;
}
