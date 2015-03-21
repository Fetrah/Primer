#include <iostream>

// Dynamic initialization is that in which initialization value isn't known at compile-time. It's computed at runtime to initialize the variable.
struct V
{
	static const int g;
};

/*
const int a = 10 * V::g; // dynamic initialization because V::g is not known the initialization of a and only known too late, after the initial attempt of the initialization of a
const int V::g = 98; // initialization comes too late because the compiler goes line by line and does not go back in time, and instead uses this expression during run-time in order to initialize a since by then, during run-time, V::g is known
static_assert(a, "test"); // since static_assert requires the first parameter to be a constant value that is known during compile time, a is now allowed to be used since it is dynamically initalized in run-time, and not in compile time. This throws the C2131 error
*/


const int V::g = 98; // compile time initialization
const int a = 10 * V::g; // compile time initialization because V::g is known during the compile time initalization of a, and need not be dynamically initalized
// these examples also provide us the knowledge which indicates that const can be both initalized either in compile time or in run time, it depends on the situation. However, at all cases, it is still a constant value.
static_assert(a, "test");


int main()
{

	system("pause");
	return 0;
}