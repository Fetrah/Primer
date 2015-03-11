#include <iostream>
using namespace std;

// class A and class B both have a display() member
class A
{
public:
	virtual void display()
	{
		cout << "Hello A" << endl;
	}
};

class B
{
public:
	virtual void display()
	{
		cout << "Hello B" << endl;
	}
};

// class C inherits the display() member from both A and B, and thus is ambiguous and must be specified when the display of C is called
class C : public A, public B {};

// class D inherits the display() member from both A and B, but also contains it's own display function, and still ambiguous
class D : public A, public B
{
public:
	void display()
	{
		cout << "Hello D" << endl;
	}
};

class E : public D
{
public:
	void display()
	{
		cout << "Hello E" << endl;
	}
};

int main()
{
	cout << "==== USING POINTERS ====" << endl;

	// cPointer & dPointer contains the address of a memory location in the heap that contains an instance of the C & D class respectively
	C* cPointer = new C;
	D* dPointer = new D;
	E* ePointer = new E;

	// cpointer->display() will output an error because display() is ambiguous since it can mean either display() for A or B

	// specify the scope of the display() member by using the scope operator ::
	cPointer->A::display(); // outputs "Hello A"
	cPointer->B::display(); // outputs "Hello B"
	ePointer->display(); // outputs "Hello E"
	ePointer->A::display(); // outputs "Hello A"
	ePointer->B::display(); // outputs "Hello B"
	// scope can be specified twice such as A::B::
	ePointer->C::A::display(); // outputs "Hello A"
	ePointer->C::B::display(); // outputs "Hello B"
	ePointer->D::display(); // outputs "Hello D"
	ePointer->D::A::display(); // outputs "Hello A"
	ePointer->D::B::display(); // outputs "Hello B"


	// since dPointer has it's own version of display(), using dPointer->display() will output "Hello D"
	dPointer->display(); // outputs "Hello D"
	dPointer->A::display(); // outputs "Hello A"
	dPointer->B::display(); // outputs "Hello B"

	cout << "==== USING OBJECTS ====" << endl;

	// use the display() member without using pointers
	A a;
	B b;
	C c;
	D d;
	E e;

	a.display(); // outputs "Hello A"
	b.display(); // outputs "Hello B"
	c.A::display(); // outputs "Hello A"
	c.B::display(); // outputs "Hello B"
	d.display(); // outputs "Hello D"
	d.A::display(); // outputs "Hello A"
	d.B::display(); // outputs "Hello B"
	e.display(); // outputs "Hello E"
	e.A::display(); // outputs "Hello A"
	e.B::display(); // outputs "Hello B"
	e.D::display(); // outputs "Hello D"


	system("pause");
	return 0;
}