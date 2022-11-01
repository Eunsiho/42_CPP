#include "./PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

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

void	PhoneBook::print_table()
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
		std::cout << std::setw(10) << this->array[i].get_first_name() << '|';
		std::cout << std::setw(10) << this->array[i].get_last_name() << '|';
		std::cout << std::setw(10) << this->array[i].get_nickname() << '|';
		std::cout << std::endl;
	}
	std::cout << "\t " << std::string(36, '-') << std::endl;
}