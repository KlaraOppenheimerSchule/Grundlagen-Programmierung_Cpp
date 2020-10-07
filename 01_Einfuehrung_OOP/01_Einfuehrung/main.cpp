#include <iostream>
#include "UserSpace.hpp"

int main()
{
    std::string username;
    std::string password;

    newLine();

    std::cout << "Nutzername: ";
    std::cin >> username;
    std::cout << "Passwort: ";
    std::cin >> password;

    newLine();

    UserSpace UserInput(username, password);

    std::cout << "outUsername: " << UserInput.getUsername() << std::endl;
    std::cout << "outPassword: " << UserInput.getPassword() << std::endl;

    newLine();
}