/* W08
* iAccount.h
* Ivy Leano
*/

#ifndef SICT_iACCOUNT_H__ 
#define SICT_iACCOUNT_H__
#include<iostream>

namespace sict 
{
	class iAccount 
	{
	public:
		virtual bool credit(double) = 0;
		virtual bool debit(double) = 0;
		virtual void monthEnd() = 0;
		virtual void display(std::ostream&) const = 0;
		virtual ~iAccount() {};
	};
	iAccount* CreateAccount(const char* account_type, double balance);
}
#endif
