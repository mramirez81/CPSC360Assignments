#include<string>
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
	public:
		Account();
		Account(int id, std::string name, double amount);
		
		std::string getOwnerName();
		int getAcctNum(); 
		double getBalance();
		
		void setOwnerName(std::string OwnerName);
		void setAcctNum(int i);
		void setBalance(double bal);

	private:
		std::string OwnerName;
		int AcctNum;
		double Balance;
};
#endif