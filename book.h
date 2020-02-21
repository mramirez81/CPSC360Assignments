#include <iostream>
#include <string>
#include <cstdlib>


//Mario Ramirez
#ifndef BOOK_H
#define BOOK_H
class Book{
	
	private:
		int bookID;
		std::string Title;
		bool checkedOut;
		
	public:
		Book();	//default constructor
		Book(int id, std::string name, bool avail=false); //constructor
		
		//getters
		std::string getTitle();  //returns description of object
		int getbookID(); //returns ID 
		
		
		//setters
		void setTitle(std::string book);	//set quantity
		void setbookID(int i); //set description
		
		//other functions
		bool isCheckedOut();
		void borrowBook();
		void returnBook();
};
#endif