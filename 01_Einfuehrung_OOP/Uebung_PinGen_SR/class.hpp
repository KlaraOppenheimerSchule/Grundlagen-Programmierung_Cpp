#include <random>
#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

class pinGen
{
public:
    pinGen(short inStellen)
    {
        this->stellen = inStellen;
        std::srand(std::time(nullptr));
    }

    std::string getPin(int inLength)
    {
        for (int i = 0; i < inLength; i++)
        {
            // int tmpNum;
            std::string tmpStr;
            
            tmpStr = std::to_string(this->getRandomPinNum());
            this->pinNum.append(tmpStr);
        }
        return this->pinNum;
    }

private:
    int getRandomPinNum()
    {
        
        this->pinInt = rand() % 10;
        return this->pinInt;
    }

    std::string pinNum;
    short stellen;
    int pinInt;
};