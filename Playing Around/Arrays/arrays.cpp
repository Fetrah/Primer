#include <iostream>
#include <cstdint>
#include <type_traits>

void printSeperator()
{
	std::cout << "----" << std::endl;
}

int main()
{
	// converts all binary outputs in the form of 1 and 0 into True and False
	std::cout << std::boolalpha;

	// if int is the same type as int with the same const-volatile qualifications,  then it will output true. Otherwise false
	std::cout << std::is_same<int, int>::value << std::endl;
	std::cout << std::is_same<int, float>::value << std::endl;

	//static_assert(!std::is_same<int[8], float[8]>::value, "distinct element type");
	//static_assert(!std::is_same<int[8], int[9]>::value, "distinct size");
	
	printSeperator();

	std::cout << std::is_same<int, int8_t>::value << std::endl; // false
	std::cout << std::is_same<int, int16_t>::value << std::endl; // false
	std::cout << std::is_same<int, int32_t>::value << std::endl; // true. this means that ints are of size 32 bytes.
	std::cout << std::is_same<int, int64_t>::value << std::endl; // false
	
	printSeperator();

	std::cout << std::is_same<float, int>::value << std::endl; // false
	std::cout << std::is_same<float, unsigned int>::value << std::endl; // false
	std::cout << std::is_same<float, int8_t>::value << std::endl; // false
	std::cout << std::is_same<float, int16_t>::value << std::endl; // false
	std::cout << std::is_same<float, int32_t>::value << std::endl; // false
	std::cout << std::is_same<float, int64_t>::value << std::endl; // false

	printSeperator();

	std::cout << std::is_same<int, signed int>::value << std::endl;
	std::cout << std::is_same<int, unsigned int>::value << std::endl;

	printSeperator();

	// unlike other types, char is neither signed nor unsigned
	std::cout << std::is_same<char, char>::value << std::endl; // true
	std::cout << std::is_same<char, unsigned char>::value << std::endl; // false
	std::cout << std::is_same<char, signed char>::value << std::endl; // false

	system("pause");
	return 0;
}