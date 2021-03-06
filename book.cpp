#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "book.h"

//default constructor
Book::Book(){
	Title = "No Title";
	srand(time(0));
	bookID = rand()% 1000 + 1;
	checkedOut = false;
}



Book::Book(int id, std::string name, bool avail){
	bookID = id;
	Title = name;
	checkedOut = avail;
}

//returns description of object
//returns ID
std::string Book::getTitle(){
	return Title;
}	
int Book::getbookID(){
	return bookID;
}


//setters
//set quantity
//set description
void Book::setTitle(std::string book){
	Title = book;
}
void Book::setbookID(int i){
	bookID = i;
}

//other functions
bool Book::isCheckedOut (){
	return checkedOut;
}
void Book::borrowBook(){
	if (isCheckedOut()){
		std::cout<<"Sorry, book has been checked out already."<<std::endl;
	}else {
		checkedOut = true;
	}
}

void Book::returnBook(){
	checkedOut =false;
}

void Book::operator = (const Book &right){
	bookID = right.bookID;
	Title = right.Title;
	checkedOut = right.checkedOut;
}

Book Book::operator + (const Book &right){
	int newID = 0;
	std::string bookTitle = Title + "," + right.Title;
	while(true){
		newID = rand()% 1000 + 1;
		if( newID != bookID && newID != right.bookID){
			break;
		}
	}
	return Book(newID, bookTitle);
	
}

Book Book::operator - ( Book &right){
	bookID = right.bookID;
	Title = right.Title;
	checkedOut = right.checkedOut;
	right.bookID = 0;
	right.Title = "No Title";
	right.checkedOut = false;
	return *this;
}
