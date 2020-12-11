// Leapyear_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

int main() {

    int cnt = 1;

    while (cnt == 1) {

        int year;

        std::cout << "Let's check if your year is a leap year\n" << "Enter your year: ";
        std::cin >> year;

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

            std::cout << "The year " << year << " is a leap year.\n";

        }
        else {

            std::cout << "The year " << year << " is not a leap year.\n";

        }

        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        if (cnt == 0) {

            std::cout << "Thanks for using Leapyear Calc!\n";
            void exit();
            system("pause");

        }

    }

    while (cnt > 1 || cnt < 0) {

        std::cout << "Error: Unsupprted character/numerical. Please type correct numericals and choose from the two options given above.\n";
        std::cout << "Do you wish to continue?\n";
        std::cout << "Press 0 to exit or 1 to continue: ";
        std::cin >> cnt;

        if (cnt == 1) {

            return main();

        }

        else {

            void exit();

        }

        system("pause");

    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

