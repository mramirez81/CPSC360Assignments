#include <iostream>
#include "book.h"
#include <string>


int main(){
	Book bookLibrary[5];
	std::string userTitle;
	
	for( int i = 0; i < 5; i++){
		std::cout <<"Please enter a title: ";
		std::getline(std::cin, userTitle);
		bookLibrary[i].setTitle(userTitle);
	}
	
	bookLibrary[2] = bookLibrary[4];
	bookLibrary[3] = bookLibrary[1] + bookLibrary[4];
	bookLibrary[0] = bookLibrary[2] - bookLibrary[1];
	
	std::cout << "Book 1" << std::endl;
	std::cout << "Title: " << bookLibrary[0].getTitle() << std::endl;
	std::cout << "Book ID: " << bookLibrary[0].getbookID() << std::endl;
	
	std::cout << "Book 2" << std::endl;
	std::cout << "Title: " << bookLibrary[1].getTitle() << std::endl;
	std::cout << "Book ID: " << bookLibrary[1].getbookID() << std::endl;
	
	std::cout << "Book 3" << std::endl;
	std::cout << "Title: " << bookLibrary[2].getTitle() << std::endl;
	std::cout << "Book ID: " << bookLibrary[2].getbookID() << std::endl;
	
	std::cout << "Book 4" << std::endl;
	std::cout << "Title: " << bookLibrary[3].getTitle() << std::endl;
	std::cout << "Book ID: " << bookLibrary[3].getbookID() << std::endl;
	
	std::cout << "Book 5" << std::endl;
	std::cout << "Title: " << bookLibrary[4].getTitle() << std::endl;
	std::cout << "Book ID: " << bookLibrary[4].getbookID() << std::endl;
	

	return 0;
}