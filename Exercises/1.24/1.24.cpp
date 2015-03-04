/*
*/

#include "C:\Users\Syed\Documents\GitHub\Primer\Resources\GCC_4_7_0\1\Sales_item.h"
#include <iostream>

Sales_item transaction, sumTransactions, previousTransaction;

int main()
{
	std::cin >> previousTransaction;
	sumTransactions = previousTransaction;
	while (std::cin >> transaction)
	{
		if (transaction.isbn == previousTransaction.isbn)
		{
			sumTransactions += transaction;
		}
	}

	system("pause");
	return 0;
}