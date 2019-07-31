#include <iostream>
#include <string>
using namespace std;


string add(string a, string b)
{
	string result = a + b;
	return result;
}

void swap(string &a, string &b)
{
	char tmp = a[0];
	a[0] = b[0];
	b[0] = tmp;
}

int main() {
	// Complete the program
	string a, b;
	cin >> a >> b;

	cout << a.size() << " " << b.size() << endl;
	cout << add(a, b) << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}

