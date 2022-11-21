/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:48:34 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 14:04:45 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon(NULL)
{ };

HumanB::~HumanB() {};

void HumanB::attack(void)
{
	if (!this->_weapon)
	{
		std::cout << '<' << this->_name << '>';
		std::cout << " can't attack" << std::endl;
	} 
	else
	{
		std::cout << '<' << this->_name << '>';
		std::cout << " attacks with their ";
		std::cout << '<' << this->_weapon->getType() << '>' << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}