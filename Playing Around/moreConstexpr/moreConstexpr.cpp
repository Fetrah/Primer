#include <iostream>

constexpr int doSomething(const int x)
{
	// x += 5; // this does not work because constexpr functions can only contain one return statement, and no other statements
	static_assert(5 > 0, "x must be > 0");
	return x + 5;
}

int main()
{
	doSomething(5);

	int c[10];
	int y[sizeof(c)];

	static_assert(y, "farts");

	std::cout << "tests" << std::endl;

	system("pause");
	return 0;
}