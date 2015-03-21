#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length, width;
public:
	// default constructor
	Rectangle() {};
	// constructor
	Rectangle(double x, double y) : length(x), width(y) {};

	// members
	int area()
	{
		return length * width;
	}

	friend Rectangle duplicate(const Rectangle& param);
};

int main()
{
	return 0;
}