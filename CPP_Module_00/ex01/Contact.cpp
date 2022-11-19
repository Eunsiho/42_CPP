/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:20:42 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/19 17:47:22 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::get_first_name_4_table()
{
	std::string	temp;

	if (this->first_name.length() > 10)
		temp = first_name.substr(0, 9) + ".";
	else
		return (this->first_name);
	return (temp);
}

std::string	Contact::get_last_name_4_table()
{
	std::string	temp;

	if (this->last_name.length() > 10)
		temp = last_name.substr(0, 9) + ".";
	else
		return (this->last_name);
	return (temp);
}

std::string	Contact::get_nickname_4_table()
{
	std::string	temp;

	if (this->nickname.length() > 10)
		temp = nickname.substr(0, 9) + ".";
	else
		return (this->nickname);
	return (temp);
}

std::string	Contact::get_first_name() {return (this->first_name);}
std::string	Contact::get_last_name() {return (this->last_name);}
std::string	Contact::get_nickname() {return (this->nickname);}
std::string	Contact::get_phone_number() {return (this->phone_number);}
std::string	Contact::get_darkest_secret() {return (this->darkest_secret);}

void Contact::print_information()
{
	std::cout << std::endl;
	std::cout << std::setw(20) << "FIRST NAME : " << get_first_name() << std::endl; 
	std::cout << std::setw(20) << "LAST NAME : " << get_last_name() << std::endl; 
	std::cout << std::setw(20) << "NICKNAME : " << get_nickname() << std::endl; 
	std::cout << std::setw(20) << "PHONE NUMBER : " << get_phone_number() << std::endl; 
	std::cout << std::setw(20) << "DARKEST SECRET : " << get_darkest_secret() << std::endl; 
	std::cout << std::endl;
}



void Contact::set_information()
{
	std::string	temp;

	while (temp.length() <= 0 && !std::cin.eof())
	{
		std::cout<<"Enter your first name : ";
		std::getline(std::cin, temp);
		this->first_name = temp;
	}
	temp = "";

	while (temp.length() <= 0 && !std::cin.eof())
	{
		std::cout<<"Enter your last name : ";
		std::getline(std::cin, temp);
		this->last_name = temp;
	}
	temp = "";

	while (temp.length() <= 0 && !std::cin.eof())
	{
		std::cout<<"Enter your nickname : ";
		std::getline(std::cin, temp);
		this->nickname = temp;
	}
	temp = "";
	
	while (temp.length() <= 0 && !std::cin.eof())
	{
		std::cout<<"Enter your phone number : ";
		std::getline(std::cin, temp);
		this->phone_number = temp;
	}
	temp = "";

	while (temp.length() <= 0 && !std::cin.eof())
	{
		std::cout<<"Enter your darkest secret : ";
		std::getline(std::cin, temp);
		this->darkest_secret = temp;
	}
}

