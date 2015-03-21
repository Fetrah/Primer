#include <iostream>
// #include <type_traits>


int main()
{
	std::cout << std::is_same<int, int>::value << std::endl;

	//static_assert(!std::is_same<int[8], float[8]>::value, "distinct element type");
	//static_assert(!std::is_same<int[8], int[9]>::value, "distinct size");

	system("pause");
	return 0;
}