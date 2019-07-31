
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	int n = 0;
	cin >> n;
	map<string, int>repertoire;
	string name;
	int number = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> number;
		repertoire.insert({ name,number });
	}
	while (cin >> name)
	{
		if (repertoire.find(name) != repertoire.end())
			std::cout << name << "=" << repertoire.find(name)->second << std::endl;
		else
			std::cout << "Not found" << std::endl;
	}
	return 0;
}
