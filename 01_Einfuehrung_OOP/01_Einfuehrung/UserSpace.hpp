#include <iostream>

class UserSpace
{
public:
    UserSpace(std::string userInput, std::string passInput, int idInput)
    {
        this->username = userInput;
        this->password = passInput;
    }


    std::string getUsername()
    {
        return this->username;
    }
    std::string getPassword()
    {
        return this->password;
    }

    void setPassword(std::string inPassword)
    {
        this->password = inPassword;
    }
    void setUsername(std::string inUsername)
    {
        this->username = inUsername;
    }
protected:

private:
    std::string username;
    std::string password;
    int id;
};


void newLine()
{
    std::cout << std::endl;
}
