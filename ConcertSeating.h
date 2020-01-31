#include <iostream>

#include <iomanip>

//Displays a seat chart and the user is given options to enter a row and seat numbers for tickets being sold. 

int main() {

    

    std::cout << "Open seats are represented by the # symbol, and unvailable with an * symbol. Top is front, back is bottom." << std::endl;

    

    char seatingChart[15][30]{};

    

    for(int i = 0; i < 15; i++) {

        for (int j = 0; j < 30; j++) {

            seatingChart[i][j] = '#';

        }

    }

    for(int i = 0; i < 15; i++) {

        for (int j = 0; j < 30; j++) {

            std::cout << std::setw(5) << seatingChart[i][j];

        }

        std::cout << std::endl;

    }

    

    char selectionMode;

    int seatRow;

    int seatCol;

    int price;

    int totalPrice;

    char doAgain;

    char options;

    int totalSales = 0;

    int seatsSold = 0;

    int specRow;

    int seatAvail;

    

    std::cout << "Seats in rows 1-7 cost $50, rows 8-15 $40." << std::endl;

    

    while (doAgain != 'q') {

        totalPrice = 0;

//Whith every ticket that is purchased, the total cost of the tickets and the seating chart
//for availability will be updated.

        std::cout << "Please select from the following choices. S to select seats, A to view total sales, B to view total seats sold, D to display seating chart, E to view total seats available, R to view seats available seats in a specific row: ";

        std::cin >> options;

        if (options == 's' || options == 'S') {

            do {

                std::cout << "Select a row: ";

                std::cin >> seatRow;

                if (seatRow > 15) {

                    std::cout << "Invalid seat location. Select a row 1-15, and a column 1-30." << std::endl;

                    selectionMode = 'y';

                    continue;

                }

                

                std:: cout << "Select a column: ";

                std::cin >> seatCol;

                if (seatCol > 30) {

                    std::cout << "Invalid seat location. Select a row 1-15, and a column 1-30." << std::endl;

                    selectionMode = 'y';

                    continue;

                }

                if (seatingChart[seatRow - 1][seatCol - 1] != '*') {

                    seatingChart[seatRow - 1][seatCol - 1] = '*';

                    seatsSold = seatsSold + 1;

                }

                else {

                    std::cout << "That seat has already been taken. " << std::endl;

                    selectionMode = 'y';

                    continue;

                }

                    if (seatRow < 8 ) {

                    price = 50;

                    totalPrice = totalPrice + price;

                    std::cout << "Total Price: $" << totalPrice << std::endl;

                }

                else if (seatRow < 15) {

                    price = 40;

                    totalPrice = totalPrice + price;

                    std::cout << "Total Price: $" << totalPrice << std::endl;

                    

                }

                std::cout << "Are you still selecting? Y/N: ";

                std::cin >> selectionMode;

                

                totalSales = totalSales + price;

            

            }

            while (selectionMode == 'Y' || selectionMode == 'y');

//Total of all ticket sales.
//Total seats sold.
        }

        else if (options == 'a' || options ==  'A') {

            std::cout << "Total Sales: $" << totalSales << std::endl;

        }

        else if (options == 'B' || options == 'b') {

            std::cout << "Total seats sold: " << seatsSold << std::endl;

        }

        else if (options == 'd' || options == 'D') {

            for(int i = 0; i < 15; i++) {

                for (int j = 0; j < 30; j++) {

                    std::cout << std::setw(5) << seatingChart[i][j];

                }

                std::cout << std::endl;

            }

        }

        else if (options == 'E' || options == 'e') {

            std::cout << "Total seats available: " << 450 - seatsSold << std::endl;

        }

        else if (options == 'r' || options == 'R') {

            std::cout << "Enter a row: ";

            std::cin >> specRow;

            for(int i = 0; i < 15; i++) {

                for (int j = 0; j < 30; j++) {

                    if (i == specRow - 1) {

                        if (seatingChart[i][j] != '#') {

                            seatAvail = seatAvail + 1;

                        }

                    }

                }

            }
			
//Shows how many seats are available in the entire auditorium.

            std::cout << "Available seats: " << seatAvail << std::endl;

            seatAvail = 0;

        }

        

        std::cout << "Enter Q to exit, C to continue: ";

        std::cin >> doAgain;

    }

}