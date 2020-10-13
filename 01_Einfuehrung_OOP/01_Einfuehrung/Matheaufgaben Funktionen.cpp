#include <iostream>
#include <math.h>


class Input
{
public:
	Input(int t_number1, int t_number2) : m_number_1(t_number1), m_number_2(t_number2) {}

	int get_sum()
	{
		return (this->m_number_1 + this->m_number_2);
	}

	int get_quadratic()
	{
		return (this->m_number_1 * this->m_number_1);
	}

	bool is_positive()
	{
		if (this->m_number_1 >= 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int get_faculty()
	{
		int tmp = 1;
		for (int i = 1; i <= this->m_number_1; i++)
		{
			tmp = tmp * i;
		}

		return tmp;
	}


private:
	int m_number_1, m_number_2;
};


void main()
{
	Input test(8, 5);
	
	std::cout << test.get_sum() << std::endl;
	std::cout << test.get_quadratic() << std::endl;
	std::cout << test.is_positive() << std::endl;
	std::cout << test.get_faculty() << std::endl;
}