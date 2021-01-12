#include <iostream>
#include <thread>
#include <chrono>

void swap(int *num1, int *num2);
void initialize(int tuerme[][3], int turmHoehe);
void tuermeAnzeigen(int tuerme[][3], int hoeheTurm);
void scheibeSchieben(int scheibe, int turmhoehe, int tuerme[][3], int herkunft, int ziel);
void tuerme(int scheibe, int turmhoehe, int tuerme[][3], int herkunft, int ziel, int temp);


int main()
{
    system("clear");

    int hoeheTurm = 0;
    std::cout << "\033[31mAnzahl der Türme: \033[0m\n";
    std::cout << "> ";
    std::cin >> hoeheTurm;

    int temp = hoeheTurm;

    int arrTuerme[hoeheTurm][3];
    initialize(arrTuerme, temp);
    tuermeAnzeigen(arrTuerme, temp);
    tuerme(hoeheTurm, temp, arrTuerme, 0, 1, 2);

}

void tuerme(int scheibe, int turmhoehe, int arrTuerme[][3], int herkunft, int temp, int ziel)
{
    if(scheibe != 0)
    {
        tuerme(scheibe - 1, turmhoehe, arrTuerme, herkunft, ziel, temp);
        std::cout << "Moving disk " << scheibe << " from " << herkunft << " to " << ziel << std::endl;
        scheibeSchieben(scheibe - 1, turmhoehe, arrTuerme, herkunft, ziel);
        tuermeAnzeigen(arrTuerme, turmhoehe);
        tuerme(scheibe - 1, turmhoehe, arrTuerme, temp, herkunft, ziel);
    }
}


void tuermeAnzeigen(int tuerme[][3], int turmHoehe)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    system("cls");
    
    for (int x = 0; x < turmHoehe; x++)
	{
		for (int y = 0; y < 3; y++)
		{
            if (tuerme[x][y] == 0)
            {
                std::cout << "|";
            } else {
                std::cout << tuerme[x][y];
            }
			
		}
		std::cout << std::endl;
	}
    std::cout << "----" << std::endl;
}

void initialize(int tuerme[][3], int turmHoehe)
{
	for (int x = 0; x < turmHoehe; x++)
	{
		tuerme[x][0] = x + 1;
		for (int y = 1; y < 3; y++)
		{
			tuerme[x][y] = 0;
		}
	}
}

void scheibeSchieben(int scheibe, int turmhoehe, int tuerme[][3], int herkunft, int ziel)
{
    int kleinste;
    int i;
    for (i = turmhoehe - 1; i >= 0 && tuerme[i][herkunft] != 0; i--)
    {
        scheibe = i;
    }

    for (i = turmhoehe - 1; i >= 0; i--)
    {
        if(tuerme[i][ziel] == 0)
        {
            kleinste = i;

            break;
            
        }
        
    }

    tuerme[kleinste][ziel] = tuerme[scheibe][herkunft];
    tuerme[scheibe][herkunft] = 0;
}

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
