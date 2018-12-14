/* W08
* Account.cpp
* Ivy Leano
*/

#include<iostream>
#include"Account.h"
using namespace std;

namespace sict 
{
	double Account::balance() const
	{
		return a_balance;
	}

	Account::Account(double balance)
	{
		bool positive = balance > 0;

		if (positive) 
		{
			a_balance = balance;
		}
	}

	bool Account::credit(double credit)
	{
		bool positive = credit > 0;

		if (positive) 
		{
			a_balance += credit;
		}

		return positive;
	}

	bool Account::debit(double debit)
	{
		bool negative = debit < 0;

		if (!negative) 
		{
			a_balance -= debit;
		}

		return !negative;
	}
}