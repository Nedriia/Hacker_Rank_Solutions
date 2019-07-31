#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
public:
	void display()const { std::cout << m_width << " " << m_height << std::endl; };
protected:
	int m_width = 0, m_height = 0;
};

class RectangleArea : public Rectangle {
public:
	void read_input() { cin >> Rectangle::m_width >> Rectangle::m_height; };
	void display()const { std::cout << Rectangle::m_width * Rectangle::m_height << std::endl; };
private:

};


int main()
{
	/*
	 * Declare a RectangleArea object
	 */
	RectangleArea r_area;

	/*
	 * Read the width and height
	 */
	r_area.read_input();

	/*
	 * Print the width and height
	 */
	r_area.Rectangle::display();

	/*
	 * Print the area
	 */
	r_area.display();

	return 0;
}