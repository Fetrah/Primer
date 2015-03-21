#include <type_traits>
#include <iostream>

using namespace std;

int main()
{
	cout << "test" << endl;

	const int timer = 5;
	
	static_assert(timer == 5, "timer must equal to 5");

	// static_assert(!std::is_same<int[8], float[8]>::value, "distinct element type");
	// static_assert(!std::is_same<int[8], int[9]>::value, "distinct size");

	system("pause");
	return 0;
}