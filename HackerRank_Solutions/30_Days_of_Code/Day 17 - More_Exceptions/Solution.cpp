#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
struct Calculator
{
	int power(int n, int p)
	{
		if (n < 0 || p < 0)
			throw runtime_error("n and p should be non-negative");
		return pow(n, p);
	}
};


int main()