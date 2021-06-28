#include <iostream>

class fahrzeug
{
public:
    uint64_t hoechstgeschwindigkeit = 0;
};

class landfahrzeug: virtual public fahrzeug //Das Keyword "virtual" weist darauf hin, dass nur eine Instanz der fahrzeug Klasse geerbt wird
{
public:
    landfahrzeug()
    {
        hoechstgeschwindigkeit = 50;
    }
};

class wasserfahrzeug : virtual public fahrzeug //Das Keyword "virtual" weist darauf hin, dass nur eine Instanz der fahrzeug Klasse geerbt wird
{
public:
    wasserfahrzeug()
    {
        hoechstgeschwindigkeit = 100;
    }
};

class amphibienfahrzeug :  public landfahrzeug,  public wasserfahrzeug
//Da von der Klasse "wasserfahrzeug" zuletzt geerbt wird überschreibt dessen Konstruktor den Wert nachdem die Klasse "landfahrzeug" den Wert 50 zugewiesen hat
{
public:
    amphibienfahrzeug()
    {
        std::cout << "amphibienfahrzeug: " << this->hoechstgeschwindigkeit << std::endl;
        std::cout << "landfahrzeug: " << landfahrzeug::hoechstgeschwindigkeit << std::endl;
        std::cout << "wasserfahrzeug: " << wasserfahrzeug::hoechstgeschwindigkeit << std::endl;
    }
};

int main()
{
    amphibienfahrzeug amphibie;

    /*
    Output:

    amphibienfahrzeug: 100
    landfahrzeug: 100
    wasserfahrzeug: 100
    */
}