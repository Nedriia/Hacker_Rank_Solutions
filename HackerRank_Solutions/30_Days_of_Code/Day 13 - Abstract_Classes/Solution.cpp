#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book {
protected:
	string title;
	string author;
public:
	Book(string t, string a) {
		title = t;
		author = a;
	}
	virtual void display() = 0;

};

// Write your MyBook class here
class MyBook
{
public:
	//   Class Constructor
	//   
	//   Parameters:
	//   title - The book's title.
	//   author - The book's author.
	//   price - The book's price.
	//
	// Write your constructor here
	MyBook(string title, string author, int price) :m_title(title), m_author(author), m_price(price)
	{}
	//   Function Name: display
	//   Print the title, author, and price in the specified format.
	//
	// Write your method here
	void display()
	{
		std::cout << "Title: " << this->m_title << std::endl;
		std::cout << "Author: " << this->m_author << std::endl;
		std::cout << "Price: " << this->m_price << std::endl;
	}
private:
	string m_title;
	string m_author;
	int m_price;
};


// End class

int main() {