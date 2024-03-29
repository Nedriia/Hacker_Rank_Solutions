#include <iostream>
#include <vector>

using namespace std;


class Person {
protected:
	string firstName;
	string lastName;
	int id;
public:
	Person(string firstName, string lastName, int identification) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson() {
		cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
	}

};

class Student : public Person
{
private:
	vector<int> testScores;
public:
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	// Write your constructor here
	Student(string firstName, string lastName, int id, vector<int>scores) :Person(firstName, lastName, id)
	{
		this->testScores = scores;
	}
	/*
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	*/
	char calculate()
	{
		char grade;
		int sum = 0;
		for (int i = 0; i < testScores.size(); i++)
		{
			sum += testScores[i];
		}
		sum /= testScores.size();
		if (sum >= 90 && sum <= 100)
			grade = 'O';
		else if (sum >= 80 && sum < 90)
			grade = 'E';
		else if (sum >= 70 && sum < 80)
			grade = 'A';
		else if (sum >= 55 && sum < 70)
			grade = 'P';
		else if (sum >= 40 && sum < 55)
			grade = 'D';
		else
			grade = 'T';
		return grade;
	}
	// Write your function here
};

int main() {