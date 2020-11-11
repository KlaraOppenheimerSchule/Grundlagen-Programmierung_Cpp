#include <iostream>

using namespace std;

class Tank
{
public:
    Tank(){};
    ~Tank(){};
    float getPreis();
    float getLiter();
    void setPreis(float _preis);
    void setLiter(float _liter);
    void berechne(float _preis, float _liter);
    
    
private:
    float preis;
    float liter;
    float summe;
    float rabatt;
    
};

float Tank::getLiter()
{
    return liter;
}

float Tank::getPreis()
{
    return preis;
}

void Tank::setLiter(float _liter)
{
    liter = _liter;
}

void Tank::setPreis(float _preis)
{
    preis = _preis;
}

void Tank::berechne(float _preis ,float _liter)
{
    liter = getLiter();
    preis = getPreis();
    summe = (preis * liter);

    if (liter >= 100)
    {
        rabatt = summe/100*5;
        summe = summe - rabatt;
    }
    
    cout << liter << " getankt, zu zahlen: " << summe << endl;
}


int main(int argc, const char * argv[])
{
    Tank t;
    t.setPreis(1);
    float lliter;
    cout << "Liter: " << endl;
    cin >> lliter;
    t.setLiter(lliter);
    t.berechne(t.getPreis(), t.getLiter());
    
    return 0;
}
