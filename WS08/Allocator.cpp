/* W08
* Allocator.cpp
* Ivy Leano
*/

#include "SavingsAccount.h" 
#include "ChequingAccount.h"

namespace sict 
{
	double interest = 0.05;
	double transaction_fee = 0.50;
	double monthly_fee = 2.00;

	iAccount* CreateAccount(const char* account_type, double balance) 
	{
		bool savings = *account_type == 'S';
		bool chequing = *account_type == 'C';

		iAccount* a = nullptr;

		if (savings) 
		{
			a = new SavingsAccount(balance, interest);
		}
		if (chequing) 
		{
			a = new ChequingAccount(balance, transaction_fee, monthly_fee);
		}
		return a;
	}
}
