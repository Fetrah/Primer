/*
Task: Read an indeterminate amount of transactions and then print those transactions to the standard output
*/

#include "C:\Users\Syed\Documents\GitHub\Primer\Resources\GCC_4_7_0\1\Sales_item.h"
#include <iostream>
#include <string>

int main()
{
	Sales_item transactions, sumTransactions;

	while (std::cin >> transactions)
	{
		sumTransactions += transactions;
	}

	std::cout << "Sum of all sales items: " << sumTransactions << std::endl;

	system("pause");
	return 0;
}