#include<iostream>
#include<string>
#include "CheckingAcct.h"
#include "LoanAcct.h"

int main(){
	
	
	CheckingAcct AcctChecking(500, "Mario Ramirez", 1000);
	std::cout << "Owner Name: " << AcctChecking.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctChecking.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctChecking.getBalance() << std::endl;
	std::cout << std::endl;
	AcctChecking.deposit(500);
	std::cout << "Owner Name: " << AcctChecking.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctChecking.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctChecking.getBalance() << std::endl;
	std::cout << std::endl;
	AcctChecking.withdraw(300);
	std::cout << "Owner Name: " << AcctChecking.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctChecking.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctChecking.getBalance() << std::endl;
	std::cout << std::endl;
	
	LoanAcct AcctLoan(10000, "Sofia Ramirez", 2000, 3.5);
	std::cout << "Owner Name: " << AcctLoan.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctLoan.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctLoan.getBalance() << std::endl;
	std::cout << "Interest Rate: " << AcctLoan.getIntRate() << std::endl;
	std::cout << std::endl;
	AcctLoan.PayBalance(100);
	std::cout << "Owner Name: " << AcctLoan.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctLoan.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctLoan.getBalance() << std::endl;
	std::cout << "Interest Rate: " << AcctLoan.getIntRate() << std::endl;
	std::cout << std::endl;
	AcctLoan.CalcInterest();
	std::cout << "Owner Name: " << AcctLoan.getOwnerName() <<std::endl;
	std::cout << "AccountNumber: " << AcctLoan.getAcctNum() << std::endl;
	std::cout << "Account Balance: " << AcctLoan.getBalance() << std::endl;
	std::cout << "Interest Rate: " << AcctLoan.getIntRate() << std::endl;
	
}