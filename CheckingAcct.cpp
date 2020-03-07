#include"CheckingAcct.h"



void CheckingAcct::deposit(double sum){
	setBalance(getBalance() + sum);
}

void CheckingAcct::withdraw(double diff){
	setBalance(getBalance() - diff);
}
	