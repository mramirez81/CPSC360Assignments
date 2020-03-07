#include "Account.h"

class LoanAcct : public Account{
	public:
		LoanAcct() : Account(){
			IntRate = 0.0;
		}
		LoanAcct(int id, std::string name, double amount, double rate) : Account(id, name, amount){
			
			IntRate = rate;	
		}
		double getIntRate();
		void setIntRate(int i);
			
		void PayBalance(int bal);
		void CalcInterest();
		
	private:
	
		double IntRate;
};