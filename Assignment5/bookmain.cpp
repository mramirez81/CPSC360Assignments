#include <iostream>

#include "book.h"

int main(){
	Book b1;
	b1.setTitle("C++ for dummies");
	b1.setbookID(2);
	std::cout << "Title: " << b1.getTitle() << std::endl;
	std::cout << "Book ID: " << b1.getbookID() << std::endl;
	if (b1.isCheckedOut()){
		std::cout << "Book is currently checked out" << std::endl;
	}else {
		std::cout << "Book is curently not checked out" << std::endl;
	}
	std::cout << std::endl;
	b1.borrowBook();
	std::cout << "Title: " << b1.getTitle() << std::endl;
	std::cout << "Book ID: " << b1.getbookID() << std::endl;
	if (b1.isCheckedOut()){
		std::cout << "Book is currently checked out" << std::endl;
	}else {
		std::cout << "Book is curently not checked out" << std::endl;
	}
	std::cout << std::endl;
	
	
	Book b2( 23, "Strange Case of Dr Jekyll and Mr Hyde", true);
	std::cout << "Title: " << b2.getTitle() << std::endl;
	std::cout<<"Book ID: "<<b2.getbookID()<<std::endl;
	if (b2.isCheckedOut()){
		std::cout<<"Book is currently checked out"<<std::endl;
	}else {
		std::cout<<"Book is curently not checked out"<<std::endl;
	}
	std::cout<<std::endl;
	b2.returnBook();
	std::cout<<"Title: "<<b2.getTitle()<<std::endl;
	std::cout<<"Book ID: "<<b2.getbookID()<<std::endl;
	if (b2.isCheckedOut()){
		std::cout<<"Book is currently checked out"<<std::endl;
	}else {
		std::cout<<"Book is curently not checked out"<<std::endl;
	}
	std::cout<<std::endl;
	
	
	Book b3(b1);
	std::cout<<"Title: "<<b3.getTitle()<<std::endl;
	std::cout<<"Book ID: "<<b3.getbookID()<<std::endl;
	if (b3.isCheckedOut()){
		std::cout<<"Book is currently checked out"<<std::endl;
	}else {
		std::cout<<"Book is curently not checked out"<<std::endl;
	}
	std::cout<<std::endl;
	

	return 0;
}