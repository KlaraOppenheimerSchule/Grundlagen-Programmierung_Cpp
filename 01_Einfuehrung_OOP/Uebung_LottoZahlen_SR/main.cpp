#include <iostream>

#include "colours_n_more.hpp"
#include "class.hpp"

int main()
{
    lottoGeraet lottoObj;
    int inpZahlen[6];

    clearScreen();
    std::cout << BOLD << "[" << RESET << GREEN << "Bitte 6 Lottozahlen {1 - 49} eingeben " << RESET << "(" << BLUE << BOLD << "Bitte mit \" \" trennen!" << RESET << ")" << BOLD << "]\n" << RESET << std::endl;
    std::cout << BOLD << GREEN << "> " << RESET << BOLD;

    std::cin >> inpZahlen[0] >> inpZahlen[1] >> inpZahlen[2] >> inpZahlen[3] >> inpZahlen[4] >> inpZahlen[5];

    for(int i = 0; i < 6; i++)
    {
        lottoObj.setLottoNumber(i, inpZahlen[i]);
    }
    lottoObj.checkNumbers();

    return 0;
}
