/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:03:41 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/04 18:28:03 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
	this->funcPtr[0] = &Harl::debug;
	this->funcPtr[1] = &Harl::info;
	this->funcPtr[2] = &Harl::warning;
	this->funcPtr[3] = &Harl::error;
};

Harl::~Harl() {};

void Harl::debug( void )
{
	std::cout << "<DEBUG> I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "<INFO> I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "<WARNING> I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "<ERROR> This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == this->level[i])
			(this->*funcPtr[i])();
	}
}