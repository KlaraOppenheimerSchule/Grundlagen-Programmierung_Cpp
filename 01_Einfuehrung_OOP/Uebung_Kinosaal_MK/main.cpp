/*
	File Name: main.cpp
	Last edited: 20.01.2021
	Klara Oppenheimer Schule
	Author: Mustafa Kilic
*/

#include <iostream>
#include <string>
#include <vector>

class cinema_management
{
/*
	Cinema Poc:
	____1___2___3___4__
	0 | 0 | 0 | 0 | 0 |
	1 | 0 | 0 | 0 | 0 |
	2 | 0 | 0 | 0 | 0 |
*/

public:
	cinema_management()
	{
		this->m_row_size = 3;
		this->m_column_size = 4;

		this->cinema.resize(this->m_row_size);
		this->cinema[0].resize(this->m_column_size);
		this->cinema[1].resize(this->m_column_size);
		this->cinema[2].resize(this->m_column_size);

		srand(time(NULL));

		for (int row = 0; row < this->m_row_size; ++row)
		{
			for (int column = 0; column < this->m_column_size; ++column)
			{
				this->cinema[row][column] = std::to_string(rand() % 2);
			}
		}
	}

	void show_cinema()
	{
		std::cout << "Cinema PoC:\n";
		std::cout << "     " << 0 << "|" << 1 << "|" << 2 << "|" << 3 << "\n";
		std::cout << "   0|" << cinema[0][0] << "|" << cinema[0][1] << "|" << cinema[0][2] << "|" << cinema[0][3] << "\n";
		std::cout << "   1|" << cinema[1][0] << "|" << cinema[1][1] << "|" << cinema[1][2] << "|" << cinema[1][3] << "\n";
		std::cout << "   2|" << cinema[2][0] << "|" << cinema[2][1] << "|" << cinema[2][2] << "|" << cinema[2][3] << "\n";
	}
	bool is_place_empty(uint64_t t_row, uint64_t t_column)
	{
		if (this->cinema[t_row][t_column] == "0")
			return false;

		return true;
	}
	bool occupy_place(uint64_t t_row, uint64_t t_column)
	{
		if (t_row > this->m_row_size || t_column > this->m_column_size)
		{
			return false;
		}

		if (this->cinema[t_row][t_column] == "0")
		{
			this->cinema[t_row][t_column] = "1";
			return true;
		}
		else if (this->cinema[t_row][t_column] == "1")
		{
			this->cinema[t_row][t_column] = "X";
			return true;
		}
	}

	std::vector<std::vector<std::string>>cinema;

private:
	uint64_t m_row_size, m_column_size;
};

void main()
{
	uint64_t input_row, input_column;
	cinema_management cinema_mgt;
	cinema_mgt.show_cinema();

repeat:
	std::cout << "Bitte geben Sie ein, welchen Sitz Sie belegen moechten (Format: ROW COLUMN).\n";
	std::cout << "> ";
	std::cin >> input_row >> input_column;

	system("CLS");

	if (!cinema_mgt.occupy_place(input_row, input_column))
	{
		std::cout << "Fehler: ROW/COLUMN zu lang für den Kinosaal.\n";	
	}
	else
	{
		cinema_mgt.show_cinema();
		goto repeat;
	}
}
