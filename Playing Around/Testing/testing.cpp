#include <iostream>
using namespace std;

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

class C : public A, public B
{};

int main()
{
	A a;
	B b;
	C c;

	a.display();
	b.display();
	c.display();

	system("pause");
	return 0;
}