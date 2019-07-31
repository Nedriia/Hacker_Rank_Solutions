#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	int j;
	double dd;
	string ss;
	// Declare second integer, double, and String variables.
	cin >> j >> dd;

	// Read and save an integer, double, and String to your variables.
	// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

	// Print the sum of both integer variables on a new line.
	int result = i + j;
	std::cout << result << endl;
	// Print the sum of the double variables on a new line.
	double sum = d + dd;

	std::cout << std::fixed;
	std::cout << std::setprecision(1);

	std::cout << sum << endl;


	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
	while (getline(cin, ss))
	{
	}
	std::cout << s + ss;
	return 0;