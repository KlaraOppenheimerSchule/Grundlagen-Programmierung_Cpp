#include <iostream>

class Person
{
public:
	Person(std::string t_fname, std::string t_sname) : m_fname{ t_fname }, m_sname{ t_sname } {}

	std::string get_fname()
	{
		return this->m_fname;
	}

	std::string get_sname()
	{
		return this->m_sname;
	}

	void set_fname(std::string t_new_fname)
	{
		this->m_fname = t_new_fname;
	}

	void set_sname(std::string t_new_sname)
	{
		this->m_sname = t_new_sname;
	}

private:
	std::string m_fname;
	std::string m_sname;
};

void main()
{
	std::string i_fname, i_sname;

	std::cout << "Please enter your first name.\n";
	std::cout << "> ";
	std::cin >> i_fname;

	std::cout << "\nPlease enter your second name.\n";
	std::cout << "> ";
	std::cin >> i_sname;

	Person input_person = Person(i_fname, i_sname);
	std::cout << "\nPerson::get_fname(): " << input_person.get_fname();
	std::cout << "\nPerson::get_sname(): " << input_person.get_sname();

	getchar(); // Else console would close immediately
}