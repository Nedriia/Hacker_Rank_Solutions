#include<bits/stdc++.h>

using namespace std;

class Box {
public:
	Box() { m_l = 0; m_b = 0; m_h = 0; };
	Box(int l, int b, int h) { m_l = l; m_b = b; m_h = h; };
	Box(const Box &box) { m_l = box.m_l; m_b = box.m_b; m_h = box.m_h; };

	int getLength()const { return m_l; }
	int getBreadth()const { return m_b; }
	int getHeight()const { return m_h; }
	long long CalculateVolume() { long result = static_cast<long long>(m_l)*m_b*m_h; return result; }
	bool operator<(Box& box) {
		if (m_l < box.getLength())
			return true;
		else if (m_b < box.getBreadth() && m_l == box.getLength())
		{
			return true;
		}
		else if (m_h < box.getHeight()
			&& m_b == box.getBreadth()
			&& m_l == box.getLength()) {
			return true;
		}
		else {
			return false;
		}
	}
	void display(ostream &flux)const { std::cout << m_l << " " << m_b << " " << m_h; }
	void operator<<(Box &box)const { std::cout << box.getLength() << " " << box.getBreadth() << " " << box.getHeight() << std::endl; }
private:
	int m_l = 0, m_b = 0, m_h = 0;

};

bool operator<(Box const& box1, Box const& box2)
{
	if ((box1.getLength() < box2.getLength()) ||
		((box1.getBreadth() < box2.getBreadth()) && (box1.getLength() == box2.getLength())) || (box1.getHeight() < box2.getHeight()
			&&
			box1.getLength() == box2.getLength()
			&&
			box1.getBreadth() == box2.getBreadth()))
		return true;
	else
		return false;
}

ostream& operator<<(ostream &flux, Box &box)
{
	box.display(flux);
	return flux;
}



//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

