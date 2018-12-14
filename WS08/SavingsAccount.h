/* W08
* SavingsAccount.h
* Ivy Leano
*/

#ifndef SICT_SAVINGSACCOUNT_H__
#define SICT_SAVINGSACCOUNT_H__
#include "Account.h"

namespace sict 
{
	class SavingsAccount : public Account 
	{
	protected:
		double s_interest_Rate;

	public:
		explicit SavingsAccount(double balance = 0.0, double interest = 0.0);
		void monthEnd();
		void display(std::ostream& os) const;

	};
}
#endif
