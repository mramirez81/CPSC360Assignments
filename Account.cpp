#include<string>
#include"Account.h"

Account::Account(){
	OwnerName = "";
	AcctNum = 0;
	Balance = 0.0;
}

Account::Account(int id, std::string name, double amount){
	AcctNum = id;
	OwnerName = name;
	Balance = amount;
}

std::string Account::getOwnerName(){
	return OwnerName;
}	
int Account::getAcctNum(){
	return AcctNum;
}

double Account::getBalance(){
	return Balance;
}

void Account::setBalance(double bal){
	Balance = bal;
}

void Account::setOwnerName(std::string name){
	OwnerName = name;
}
void Account::setAcctNum(int i){
	AcctNum = i;
}

