#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int queries = 0;
	cin >> queries;
	std::map<string, int> notes;
	string name;
	int type = 0;

	for (int i = 0, score(0); i < queries; i++)
	{
		cin >> type >> name;
		if (type == 1)
		{
			cin >> score;
			notes[name] += score;
		}
		else if (type == 2)
		{
			notes.erase(name);
		}
		else
			std::cout << notes[name] << std::endl;
	}
	return 0;
}



