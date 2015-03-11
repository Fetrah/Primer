#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length, width;
public:
	Rectangle() {};
	Rectangle(double x, double y) : length(x), width(y) {};
	double area()
	{
		return length * width;
	}
	// indicate a non-member function is a friend that is defined outside of the class which has the permission to access private members
	friend Rectangle expand(Rectangle foo, int bar);
};

// friend function of Rectangle defined outside of Rectangle class which clearly accesses the width and length members of Rectangle
Rectangle expand(Rectangle foo, int bar)
{
	// access Rectangles private members (foo.width and foo.length) because expand() is a friend
	foo.width = foo.width * bar;
	foo.length = foo.length * bar;

	return foo;
}

// friend class unlike expand() which is a friend function

int main()
{
	Rectangle rec1(5, 10);
	cout << rec1.area() << endl;

	rec1 = expand(rec1, 2);
	cout << rec1.area() << endl;
	
	system("pause");
	return 0;
}

// new operator returns an address not an object