/* W08
* Account.h
* Ivy Leano
*/

#ifndef SICT_ACCOUNT_H__
#define SICT_ACCOUNT_H__
#include "iAccount.h"

namespace sict 
{
	class Account : public iAccount 
	{
	protected:
		double a_balance;
		double balance() const;

	public:
		explicit Account(double balance = 0.0);
		bool credit(double credit);
		bool debit(double debit);
	};

	iAccount* CreateAccount(const char* account_type, double balance);
}
#endif
