#include <iostream>
#include <fstream>
#include <string>


int main(){

	std::string sentence; 	//hold fullname input to be written to the file
	std::cout << "Enter a sentance to analyze: ";
	std::cin >> sentence;//place string input into file
	
	int numWords = 0;		//number of words seen
	unsigned long longestWord = 0; //number of characters of longest word
	unsigned long longestWordStart = 0; //starting index of longest word
	unsigned long wordStart = 0; //starting index of current wordStart
	unsigned long wordLength = 0; //length of current word
	
	bool withE = false;
	
	
	
	for(int i=0; i < sentence.length(); i++){
	
		if ((sentence[i] == 'E') ||(sentence[i] == 'e' )){
			withE = true;
		}
		
		
		if(sentence[i] == ' '){
		
			if(withE){
				numWords++; //increase number of words
				wordLength = i - wordStart; //length of current word
				//now keep track of longest word so far
				if(wordLength > longestWord){
					//if current word length is greater than longestword we saw so far
					longestWord = wordLength;
					longestWordStart = wordStart;
					
				}
				wordStart = i+1;
			}
		}
	}
	
	//process last word since sentence is assumed to not end with a space
	if(withE){
		numWords++; //increase number of words
		wordLength = sentence.length() - wordStart; //length of current word
		//now keep track of longest word so far
		if(wordLength > longestWord){
			//if current word length is greater than longestword we saw so far
			longestWord = wordLength;
			longestWordStart = wordStart;
			
		}
	}
	std::string wordE;
	for(int j = longestWordStart; j < longestWord; j++){
		wordE+= sentence[j];
	}
	//print some statistics
	
	std::cout << "This sentence has " << numWords << " words." << std::endl;
	std::cout << "The longest word with the letter E is " << wordE << " ." << std::endl;
	std::cout << "The longest word has " << longestWord <<std::endl;
	
	
}