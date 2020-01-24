#include <iostream>

#include <ctime>

#include <cstdlib>

#include <chrono>

#include <thread>

int getRandTurn();

int roll();

void getWinner(int);

std::string getUserRoll();

int main() {

    int randTurn;

    int userTurnScore = 0;

    int compTurnScore = 0;

    int userScore = 0;

    int compScore = 0;

    int rollScore = 0;

    std::string userRoll = "";

    randTurn = getRandTurn();

    while(compScore < 100 && userScore < 100) {

        if (randTurn == 1 && compTurnScore < 20) {

            rollScore = roll();

            if (rollScore != 1) {

                compTurnScore = compTurnScore + rollScore;

                compScore = rollScore + compScore;

                std::cout << "Current Roll: " << rollScore << " Turn Score: " << compTurnScore << std::endl;

                std::cout << "Computer Total: " << compScore << std::endl;

                std::cout << "Computer: " << compScore << " User: " << userScore << std::endl;

            }

            else {

                std::cout << "Computer rolled a 1!" << " Turn Score: 0 " << std::endl;

                compScore = compScore - compTurnScore;

                std::cout << "Computer Total: " << compScore << std::endl;

                compTurnScore = 0;

                randTurn = 2;

                std::cout << "Computer: " << compScore << " User: " << userScore << std::endl;

            }

        }

        else {

            compTurnScore = 0;

            randTurn = 2;

        }

        if (randTurn == 2) {

            userRoll = getUserRoll();

            if (userRoll == "R" || userRoll == "r") {

                rollScore = roll();

                if (rollScore != 1) {

                    userTurnScore = userTurnScore + rollScore;

                    std::cout << "Current Roll: " << rollScore << " Turn Score: " << userTurnScore << std::endl;

                    userScore = userScore + rollScore;

                    std::cout << "User Total: " << userScore << std::endl;

                    std::cout << "Computer: " << compScore << " User: " << userScore << std::endl;

                   
                }

                else {

                    std::cout << "Oops you rolled a 1, Turn Score: 0" << std:: endl;

                    userScore = userScore - userTurnScore;

                    userTurnScore = 0;

                    std::cout << "User Total: " << userScore << std::endl;

                    randTurn = 1;

                    std::cout << "Computer: " << compScore << " User: " << userScore << std::endl;

                }

            }

            else if (userRoll == "H" || userRoll == "h") {

                randTurn = 1;

                userTurnScore = 0;

            }

        }

    }

    
    getWinner(compScore);

    
}


int getRandTurn() {

    int randTurn;

    srand(time(0));

    randTurn = rand() % 2 + 1;

    
    if(randTurn == 1 ) {

        std::cout << "The Computer goes first! You are player two." << std::endl;

    }

    else {

        std::cout << "You go first!. You are player one." << std::endl;

    }

    return randTurn;

    }

int roll() {

    int rollScore;

    rollScore = rand() % 6 + 1;

    return rollScore;

}

void getWinner(int compScore) {

    if (compScore >= 100) {

        std::cout << "Unfortunately you lost the game" << std::endl;

    }

    else {

        std::cout << "You have won the game, FIGHT ON!" << std::endl;

    }

}

std::string getUserRoll() {

    std::string userRoll = "";

    std::cout << "Please enter the letter R to roll, Or the letter H to hold : ";

    std::cin >> userRoll;

    return userRoll;

}