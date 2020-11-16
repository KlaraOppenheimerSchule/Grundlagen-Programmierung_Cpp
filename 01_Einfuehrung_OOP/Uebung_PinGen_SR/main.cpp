#include <iostream>
#include "colours_n_more.hpp"
#include "class.hpp"

int main()
{
    short stellen;
    std::string outPin;
    clearScreen();
    std::cout << BOLD << "[" << BLUE << "Pin Generator" << WHITE << "]" << RESET << std::endl;
    std::cout << RED << "Wie viele Code stellen sollen es sein?\n" << RESET << std::endl;
    std::cout << BOLD << YELLOW << "> " << RESET;
    std::cin >> stellen;
    pinGen pinGenObj(stellen);

    outPin = pinGenObj.getPin(stellen);

    clearScreen();
    std::cout << BOLD << YELLOW << "Neue PIN: " << RESET << "\"" <<  BLUE << outPin << RESET << "\"" << std::endl;
}
