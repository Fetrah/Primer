#include <iostream>

int main()
{
	// define a constant variable: this can be initialized in either compile time or run time
	const double pi1 = 3.1415;
	// define a constant variable, specifically a constexpr variable that can ONLY be defined during compile time
	constexpr double pi2 = 3.1415;

	constexpr double pi3 = pi2; // pass
	// constexpr double pi4 = pi1; // fail

	static_assert(pi2 == 3.1415, "Pi must be equal to 3.1415"); // pass, because static_assert only accepts compile time constants
	// static_assert(pi1 == 3.1415, "Pi must be equal to 3.1415"); // fail, because a const isn't a compile time constant, it can be either a compile time constant or a run time

	system("pause");
	return 0;
}