#include <iostream>
using namespace std;

class Polygon
{
protected:
	double length, width;
public:
	void setValues(double x, double y)
	{
		length = x;
		width = y;
	}

	// pure virtual abstract members to be later redefined. Objects of Polygon cannot be instantiated because of these abstract classes. Abstract or pure virtual classes are marked with the = 0
	virtual double calculateArea() = 0;
	virtual void displayArea() = 0;
};

// Rectangle inherits all protected and public members of Polygon
class Rectangle : public Polygon 
{
public:
	// defining pure virtual member specific to Rectangle
	double calculateArea() 
	{
		return(length * width);
	}

	void displayArea()
	{
		cout << "The area of your rectangle is " << calculateArea() << endl;
	}
};

// Triangle inherits all protected and public members of Polygon
class Triangle : public Polygon 
{
public:
	//  defining pure virtual members specific to Triangle
	double calculateArea() 
	{
		return(1.0 / 2.0 * length * width);
	}

	void displayArea()
	{
		cout << "The area of your triangle is " << calculateArea() << endl;
	}
};

int main()
{
	
	Rectangle rectangle1;
	Triangle triangle1;
	Polygon* rectanglePointer = &rectangle1;
	Polygon* trianglePointer = &triangle1;

	// using  pointers to call members. Virtual key allows the corresponding specific member to be called for their respective classes
	rectanglePointer->setValues(5.27, 10.5);
	rectanglePointer->displayArea();
	trianglePointer->setValues(5.27, 10.5);
	trianglePointer->displayArea();
	/*
	// directly calling members using object and no pointers
	rectangle1.setValues(5.27, 10.5);
	rectangle1.displayArea();

	triangle1.setValues(5.27, 10.5);
	triangle1.displayArea();
	*/



	system("pause");
	return 0;
}