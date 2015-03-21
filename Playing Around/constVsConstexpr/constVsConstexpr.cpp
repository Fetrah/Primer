#include <iostream>

constexpr int MeaningOfLife(int a, int b) 
{ 
	return a * b;
}

const int meaningOfLife(int a, int b)
{
	return a * b;
}

int main()
{
	const int x = MeaningOfLife(6, 7);
	std::cout << x << std::endl;

	// static_assert(meaningOfLife(6, 7), "farts"); // fails with error C2131: expression didn't evaluate to a constant. This is because static_assert() requires a parameter that is both a constant and is initialized during compile time (constexpr not a const expression)
	static_assert(MeaningOfLife(6, 7), "farts"); // passes because the first parameter only accepts constexpr values such as from MeaningOfLife(), and not const values as from meaningOfLife()

	system("pause");
	return 0;
}