#include <iostream>

// Bad code:
constexpr int doSomething(int x)
{
static_assert(x > 0, "x must be > 0"); // cannot use function parameters, which aren't constant, for static_assert's constant expression parameter
return x + 5;
}

/*
// Good code:
constexpr int do_something(int x)
{
	return x > 0 ? (x + 5) : (throw std::logic_error("x must be > 0"));
}
*/

int main()
{
	do_something(-1);

	system("pause");
	return 0;
}