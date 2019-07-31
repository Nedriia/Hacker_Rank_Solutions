#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;
	Difference(vector<int> a) : elements(a) {};

	void computeDifference()
	{
		for (auto it = elements.begin(); it != elements.end(); ++it)
		{
			for (int i = 0; i < elements.size(); i++)
			{
				if (abs(elements[i] - *it) > maximumDifference)
				{
					maximumDifference = abs(elements[i] - *it);
				}
			}
		}
	}

	// Add your code here

}; // End of Difference class