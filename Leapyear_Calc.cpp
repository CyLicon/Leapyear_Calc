// Leapyear_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int year;
    std::cout << "Let's check if your year is a leap year\n" << "Enter your year: ";
    std::cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

        std::cout << "The year " << year << " is a leap year.\n";

    }
    else {

        std::cout << "The year " << year << " is not a leap year.\n";

    }

    std::cout << "Thanks for using Leapyear Calc!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

