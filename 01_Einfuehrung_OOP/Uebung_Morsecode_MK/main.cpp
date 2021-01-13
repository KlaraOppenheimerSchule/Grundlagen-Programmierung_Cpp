/*
    File Name: main.cpp
    Last edited: 13.01.2021
    Klara Oppenheimer Schule
    Author: Mustafa Kilic
*/

#include <iostream>
#include <string>

void main()
{
    // Mögliche andere aber viel längere version: https://gist.github.com/DawiDeX-Zero/c39981e4659f71e59324a0214b1e44d9

    std::string zeichenkette;
    std::string alphabet_de = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890ß.,:;?!-_'\"=()@";
    std::string alphabet_morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----", "...--..", ".-.-.-", "--..--", "---...", "-.-.-.", "..--..", "-.-.--", "-....-", "..--.-", ".----.", ".-..-.", "-...-", "-.--.", "-.--.-", ".--.-." };

    std::cout << "Bitte geben Sie eine Zeichenkette ein.\n";
    std::cout << "> ";
    std::getline(std::cin, zeichenkette);

    std::string converted_morse;
    for (int i = 0; i < zeichenkette.length(); i++)
    {
        zeichenkette[i] = toupper(zeichenkette[i]);

        if (zeichenkette[i] == ' ')
        {
            converted_morse.append("/"); // Leerzeilen werden als / (Backslash) übersetzt.
            continue;
        }

        size_t found = alphabet_de.find(zeichenkette[i]);
        if (found != std::string::npos)
        {
            converted_morse.append(alphabet_morse[found]);
            if (i != zeichenkette.length())
            {
                converted_morse.append(" "); // An das Ende jedes Morse Zeichens wird ein Space eingefügt.
            }
        }
    }

    std::cout << "\nEINGABE\t\t" << zeichenkette << std::endl;
    std::cout << "MORSE\t\t" << converted_morse << std::endl;
}
