#include "Account.h"
#include<string>

class CheckingAcct : public Account{
	public:
		CheckingAcct() : Account(){}
		CheckingAcct(int id, std::string name, double amount) : Account(id, name, amount){}
			
		void deposit(double sum);
		void withdraw(double diff);
};