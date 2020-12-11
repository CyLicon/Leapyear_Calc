// Leapyear_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

int main() {

    // "cnt" (control) variable to determine user's option to exit the program.
    int cnt = 1;

    while (cnt == 1) {

        int year;

        std::cout << "Let's check if your year is a leap year\n" << "Enter your year: ";
        std::cin >> year;

        //formula to determine leap years.

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

            std::cout << "The year " << year << " is a leap year.\n";

        }
        else {

            std::cout << "The year " << year << " is not a leap year.\n";

        }

        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        //cnt is 0 if user wants to exit
        if (cnt == 0) {

            std::cout << "Thanks for using Leapyear Calc!\n";
            void exit();
            system("pause");

        }

    }
    
    //error message if user enters any other value than of 0 or 1
    while (cnt > 1 || cnt < 0) {

        std::cout << "Error: Unsupprted character/numerical. Please type correct numericals and choose from the two options given above.\n";
        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        if (cnt == 1) {

            //returns to main function if user enters 1 to continue after error
            return main();

        }

        else {

            //exits if user enters 0 to exit the program
            void exit();

        }

        //just to keep the window open instead of collapsing instantaneously
        system("pause");

    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

