/*
/* W08
* ChequingAccount.h
* Ivy Leano
*/

#ifndef SICT_CHEQUINGACCOUNT_H__
#define SICT_CHEQUINGACCOUNT_H__
#include "Account.h"

namespace sict 
{
	class ChequingAccount : public Account 
	{
	protected:
		double c_transaction_fee;
		double c_month_end_fee;

	public:
		explicit ChequingAccount(double balance = 0.0, double trans_fee = 0.0, double mo_end_fee = 0.0);
		bool credit(double amount);
		bool debit(double amount);
		void monthEnd();
		void display(std::ostream& os) const;
	};

}
#endif
