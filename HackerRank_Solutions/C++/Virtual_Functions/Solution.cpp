#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
	virtual void getdata()
	{
		cin >> m_name >> m_age;
	}

	virtual void putdata()const
	{
		cout << this->m_name << " " << this->m_age;
	}
private:
	string m_name;
	int m_age;

};

class Professor : public Person
{
public:
	Professor()
	{
		this->cur_id = ++m_cur_id;
	}
	static int m_cur_id;
	void getdata()
	{
		Person::getdata();
		cin >> m_publications;
	}

	void putdata() const
	{
		Person::putdata();
		cout << " " << m_publications << " " << this->cur_id << "\n";
	}

private:
	int m_publications;
	int cur_id;
};
int Professor::m_cur_id = 0;

class Student : public Person
{
public:
	Student()
	{
		this->cur_id = ++m_cur_id;
	}
	static int m_cur_id;
	void getdata()
	{
		Person::getdata();
		for (int i = 0; i < 6; i++)
		{
			int marks;
			cin >> marks;
			m_sum += marks;
			m_array[i] = marks;
		}
	}

	void putdata() const
	{
		Person::putdata();
		cout << " " << m_sum << " " << this->cur_id << "\n";
	}

private:
	int m_array[6];
	int m_sum;
	int cur_id;
};
int Student::m_cur_id = 0;

int main() {

	int n, val;
	cin >> n; //The number of objects that is going to be created.
	Person *per[n];

	for (int i = 0; i < n; i++) {

		cin >> val;
		if (val == 1) {
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for (int i = 0; i < n; i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;

}
