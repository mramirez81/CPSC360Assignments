#include"LoanAcct.h"



double LoanAcct::getIntRate(){
	return IntRate;
}
void LoanAcct::setIntRate(int i){
	IntRate = i;
}
void LoanAcct::PayBalance(int bal){
	setBalance(getBalance() - bal);
}
void LoanAcct::CalcInterest(){
	setBalance(getBalance() + (IntRate * getBalance()));
}

