/*
    File Name: main.cpp
    Last edited: 10.11.2020
    Klara Oppenheimer Schule

    Author: Mustafa Kilic
*/

#include <iostream>
#include "ihk.hpp"

int main()
{
    uint32_t ihk_punkte;

    std::cout << "Bitte gebe deine IHK Punkte ein:\n";
    std::cout << "> ";
    std::cin >> ihk_punkte;
    
    float ihk_note = IHK::get_mark_with_points(ihk_punkte);

    if (ihk_note != (float)1000)    
        // (float) können wir in dem fall wegschreiben, jedoch ist es trotzdem sinnvoll, dies nennt sich Type Casting in C++
        // 1000 ist ein return was vom default constructor kommt, falls die Punkte nicht in dem Intervall sind
    {
        std::cout << "Ihre IHK-Note ist: " << ihk_note;
        getchar();
        std::exit(1);
    }
    else
    {
        std::cout << "Fehler: Falsche eingabe\n";
        getchar();
        std::exit(1);
    }
}
