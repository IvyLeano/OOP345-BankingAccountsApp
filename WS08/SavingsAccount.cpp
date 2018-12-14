/* W08
* SavingsAccount.cpp
* Ivy Leano
*/

#include<iostream>
#include<iomanip>
#include"SavingsAccount.h"
using namespace std;

namespace sict 
{
	SavingsAccount::SavingsAccount(double balance, double interest)
	{
		bool positive_Interest = interest > 0;

		if (positive_Interest) 
		{
			s_interest_Rate = interest;
		}

		a_balance = balance;
	}
	void SavingsAccount::monthEnd()
	{
		double interest = s_interest_Rate * a_balance;

		a_balance += interest;

	}
	void SavingsAccount::display(std::ostream & os) const
	{
		os << "Account type: Savings" << endl;
		os << "Balance: $" << setprecision(2) << fixed << a_balance << endl;
		os << "Interest Rate (%): " << setprecision(2) << fixed << s_interest_Rate * 100 << endl;
	}
}