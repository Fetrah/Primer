#include "C:\Users\Syed\Documents\GitHub\Primer\Resources\GCC_4_7_0\1\Sales_item.h"
#include <iostream>

int main()
{
	Sales_item book1, book2;

	std::cin >> book1 >> book2; // read a pair of transactions
	std::cout << "Sum: " << book1 + book2 << std::endl; // print their sum

	system("pause");
	return 0;
}