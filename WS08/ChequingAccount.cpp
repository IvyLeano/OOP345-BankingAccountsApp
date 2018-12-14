// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: ChequingAccount.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file implements the ChequingAccount class
///////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include "ChequingAccount.h"
using namespace std;

namespace sict {

	ChequingAccount::ChequingAccount(double balance, double trans_fee, double mo_end_fee)
	{
		bool positive_tf = trans_fee > 0;
		bool positive_mf = mo_end_fee > 0;

		if (positive_tf) {
			c_transaction_fee = trans_fee;
		}
		if (positive_mf) {
			c_month_end_fee = mo_end_fee;
		}
		a_balance = balance;
	}

	bool ChequingAccount::credit(double amount)
	{
		bool successful = Account::credit(amount);

		if (successful) {
			Account::debit(c_transaction_fee);
		}

		return successful;
	}

	bool ChequingAccount::debit(double amount)
	{
		bool successful = Account::debit(amount);

		if (successful) {
			Account::debit(c_transaction_fee);
		}

		return successful;
	}

	void ChequingAccount::monthEnd()
	{
		Account::debit(c_month_end_fee);
	}

	void ChequingAccount::display(std::ostream & os) const
	{
		os << "Account type: Chequing" << endl;
		os << "Balance: $" << setprecision(2) << fixed << a_balance << endl;
		os << "Per Transaction Fee: " << setprecision(2) << fixed << c_transaction_fee << endl;
		os << "Monthly Fee: " << setprecision(2) << fixed << c_month_end_fee << endl;
	}

}