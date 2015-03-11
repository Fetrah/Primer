#include <iostream>

// abstract class that contains pure virtual members denoted by "= 0"
// cannot instantiate an object of Polygon class because it is an abstract class
// class becomes an abstract class if it contains any pure virtual members
// although it is an abstract class, and seems useless, it can still be useful by creating pointers that reference it
class Polygon // polymorphic base class
{
protected: // like private, but can be inherited by its friends and inherited classes classes
	double length, width; // don't need to redefine length and width in inherited classes

public: // can be inherited by all classes
	// no constructor? automatic default constructor?
	void setvalue(double param1, double param2) // setValue can be inherited by all classes
	{
		length = param1;
		width = param2;
	}

	// pure virtual member denoted by "= 0"
	// "= 0" essentially means this member is no defined but will later be defined in some derived class
	// pure virtual members serve as a template for other inherited classes to use
	// uses the void parameter which forces the displayArea function from using any parameters
	virtual void displayArea(void) = 0; 
	// does not require parameters because it acquires it's parameters from setValue()
	// dummy virtual method using no block statements because virtual is indicating it will contain more info in the inherited classes
};

class Rectangle: public Polygon // rectangle class derives all Polygon members including protected members
{
	// inherits Polygon's protected members length and width
public:
	// inherits Polygon's public member setValue()
	// inherits Polygon's public virtual member 
	void displayArea()
	{ // this getArea() method actually contains statements within its block specific to Rectangle
		std::cout << length * width << std::endl;
	}
};

class Triangle : public Polygon // another inherited class from Polygon
{
// redefing public members of base Polygon class
public:
	void displayArea() // displayArea() is a redefined pure virtual class
	{
		std::cout << 1.0 / 2.0 * length * width << std::endl; // block statement specific for Triangle class
	}
};

int main()
{
	Rectangle rect1; // create an obect of Rectangle
	Triangle trgl1; // create an object of Triangle
	// polyPointer1 and 2 contain addresses that refer/point to inherited classes of Polygon
	Polygon* polyPointer1 = &rect1,* polyPointer2 = &trgl1; // create two pointers that store the addresses of rect1 and trgl1

	// call the corresponding inherited class by derefencing the address stored in both polyPointers to point to the base class which
	// then points to the corresponding inherited class by using the virtual key
	polyPointer1->setvalue(5, 6);
	polyPointer1->displayArea();
	polyPointer2->setvalue(5, 6);
	polyPointer2->displayArea();

	system("pause");
	return 0;
}