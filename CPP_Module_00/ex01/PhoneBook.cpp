#include "./PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

int	PhoneBook::get_index_2_search(std::string &str)
{
	std::stringstream	temp;
	int					index;

	temp << str;
	temp >> index;
	return (index);
}

PhoneBook::PhoneBook() {this->index = 0;}

PhoneBook::~PhoneBook() {return ;}

void PhoneBook::add_contact()
{
	array[index].set_information();
	if (index == 7)
		index = 0;
	else
		++index;
}

void PhoneBook::print_table()
{
	std::cout << "\t " << std::string(36, '-') << std::endl;
	std::cout << "\t|   |" << std::setw(10) << "FIRST NAME";
	std::cout << '|' << std::setw(10) << "LAST NAME";
	std::cout << '|' << std::setw(10) << "NICKNAME";
	std::cout << '|' << std::endl;
	std::cout << "\t|" << std::string(36, '-') << '|' << std::endl;
	for(int i = 0; i < 8; ++i)
	{
		std::cout << "\t| " << i + 1<< " |";
		std::cout << std::setw(10) << this->array[i].get_first_name_4_table() << '|';
		std::cout << std::setw(10) << this->array[i].get_last_name_4_table() << '|';
		std::cout << std::setw(10) << this->array[i].get_nickname_4_table() << '|';
		std::cout << std::endl;
	}
	std::cout << "\t " << std::string(36, '-') << std::endl;
}

void PhoneBook::search_contact()
{
	std::string			command;
	int					index;

	print_table();
	while (command.compare("exit") != 0 && !std::cin.eof())
	{
		std::cout << "Enter the index 1 to 8 or exit" << std::endl;
		std::getline(std::cin, command);
		if (command.compare("exit") != 0 && !std::cin.eof())
		{
			index = get_index_2_search(command);
			if (0 < index && index <= 8)
				this->array[index - 1].print_information();
		}
	}
}
