#include <iostream>
#include <chrono>

class lottoGeraet
{
public:
    lottoGeraet()
    {
        std::srand(std::time(nullptr));

        for (int i = 0; i < 6; i++)
        {
            this->lottoZahlen[i] = (std::rand() % 48) + 1;
        }
        this->lottoZahlen[0] = 32;
    }

    void setLottoNumber(int inNumberPlace, int inNumber)
    {
        if (inNumber < 50)
        {
            this->rateZahlen[inNumberPlace] = inNumber;
        }
        else
        {
            std::cout << "Nummer zu hoch!";
        }
    }

    void checkNumbers()
    {
        std::cout << RESET << "Lottozahlen:     [";
        for (int i = 0; i < 6; i++)
        {
            if (i < 5)
            {
                std::cout << lottoZahlen[i] << ", ";
            } else {
                std::cout << lottoZahlen[i];
            }
        }
        std::cout << "]\n";

        std::cout << "Erratene Zahlen: [";
        for (int i = 0; i < 6; i++)
        {
            if (lottoZahlen[i] == rateZahlen[i])
            {
                if (i < 5)
                {
                    std::cout << YELLOW << BOLD << rateZahlen[i] << RESET << ", ";
                } else {
                    std::cout << YELLOW << BOLD << rateZahlen[i] << RESET;
                }
            } else {
                if (i < 5)
                {
                    std::cout << rateZahlen[i] << ", ";
                } else {
                    std::cout << rateZahlen[i];
                }
            }
        }
        std::cout << "]\n";
    }

private:
    int lottoZahlen[6];
    int rateZahlen[6];
};