#include "./Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::set_first_name()
{
	std::string	temp;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, temp);
	this->first_name = temp;
	return ;
}

void	Contact::set_last_name()
{
	std::string	temp;

	std::cout << "Enter your last name: ";
	std::getline(std::cin, temp);
	this->last_name = temp;
	return ;
}

void	Contact::set_nickname()
{
	std::string	temp;

	std::cout << "Enter your nickname: ";
	std::getline(std::cin, temp);
	this->nickname = temp;
	return ;
}

void	Contact::set_phone_number()
{
	std::string	temp;

	std::cout << "Enter your phone number: ";
	std::getline(std::cin, temp);
	this->phone_number = temp;
	return ;
}

void	Contact::set_darkest_secret()
{
	std::string	temp;

	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, temp);
	this->darkest_secret = temp;
	return ;
}

void	Contact::set_information()
{
	this->set_first_name();
	this->set_last_name();
	this->set_nickname();
	this->set_phone_number();
	this->set_darkest_secret();
}