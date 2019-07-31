#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:
	void set_age(int newAge)
	{
		age = newAge;
	}
	int get_age()const {
		return age;
	}

	void set_standard(int new_standard)
	{
		standard = new_standard;
	}
	int get_standard()const
	{
		return standard;
	}

	void set_first_name(string newFirst_name)
	{
		first_name = newFirst_name;
	}
	string get_first_name()const
	{
		return first_name;
	}

	void set_last_name(string newLast_name)
	{
		last_name = newLast_name;
	}
	string get_last_name()const
	{
		return last_name;
	}
	string to_string()const {
		string result;
		result = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
		return result;
	}


private:
	int age;
	string first_name;
	string last_name;
	int standard;

};

int main() {
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;
	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << "\n";
	cout << st.to_string();

	return 0;
}

