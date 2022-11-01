#include "./Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact() {return ;}
Contact::~Contact() {return ;}
std::string	Contact::get_first_name() {return (this->first_name);}
std::string	Contact::get_last_name() {return (this->last_name);}
std::string	Contact::get_nickname() {return (this->nickname);}
std::string	Contact::get_phone_number() {return (this->phone_number);}
std::string	Contact::get_darkest_secret() {return (this->darkest_secret);}

void	Contact::set_information()
{
	std::string	temp;

	std::cout<<"Enter your first name : ";
	std::getline(std::cin, temp);
	if (temp.length() > 10)
		temp = temp.substr(0, 9) + ".";
	this->first_name = temp;

	std::cout<<"Enter your last name : ";
	std::getline(std::cin, temp);
	if (temp.length() > 10)
		temp = temp.substr(0, 9) + ".";
	this->last_name = temp;

	std::cout<<"Enter your nickname : ";
	std::getline(std::cin, temp);
	if (temp.length() > 10)
		temp = temp.substr(0, 9) + ".";
	this->nickname = temp;
	
	std::cout<<"Enter your phone number : ";
	std::getline(std::cin, temp);
	if (temp.length() > 10)
		temp = temp.substr(0, 9) + ".";
	this->phone_number = temp;
	
	std::cout<<"Enter your darkest secret : ";
	std::getline(std::cin, temp);
	if (temp.length() > 10)
		temp = temp.substr(0, 9) + ".";
	this->darkest_secret = temp;
}

