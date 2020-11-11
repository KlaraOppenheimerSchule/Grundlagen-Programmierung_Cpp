#include <iostream>
#include <thread>
#include <chrono>

#include "class.hpp"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    const std::string OS = "win";
#elif __linux__
    const std::string OS = "linux";
#elif __unix__
    const std::string OS = "unix";
#else
#   error "Unknown Compiler"
#endif

tankHelfer tH_obj;

void getFuelType();
void clearScreen();
void getFuelAmount();





int main()
{
    getFuelType();
    getFuelAmount();
    clearScreen();
    std::cout << "\033[1m\033[31mPreis: \033[0m" << tH_obj.calcPrice() << std::endl;


    return 0;
}


void clearScreen()
{
    if(OS == "win")
    {
        system("cls");
    } else if (OS == "linux" || OS == "unix")
    {
        system("clear");
    }
}

void getFuelAmount()
{
    double inFuelAmount;
    std::cout << "\033[1;34;4mWie viel Kraftstoff wollen sie tanken? (L)\033[0m\n\n" << std::endl;
    std::cout << "\033[0m> ";
    std::cin >> inFuelAmount;
    if (inFuelAmount > 10000)
    {
        std::cout << "Unrealistische Menge Kraftstoff, bitte erneut versuchen!\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        clearScreen();
        main();
    } else if (inFuelAmount >= 100)
    {
        tH_obj.setRabatt(0.05);
    }

    tH_obj.setFuelAmount(inFuelAmount);
    clearScreen();
}

void getFuelType()
{
    short userSelection;

    clearScreen();
    std::cout << "\033[1;34;4mWelchen Kraftstoll wollen sie tanken?\033[0m\n\n";

    std::cout << "\033[1m[\033[31m1\033[37m] Super\n";
    std::cout << "\033[1m[\033[31m2\033[37m] Super Pro Plus\n";
    std::cout << "\033[1m[\033[31m3\033[37m] Diesel\n";
    std::cout << "\033[1m[\033[31m4\033[37m] Exit\n\n";

    std::cout << "\033[0m> ";

    std::cin >> userSelection;

    if(userSelection > 4 || userSelection < 1)
    {
        std::cout << "Nicht unterstützte Eingabe, bitte erneut versuchen!";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        clearScreen();
        main();
    }
    tH_obj.setFuelType(userSelection);
    clearScreen();
}
