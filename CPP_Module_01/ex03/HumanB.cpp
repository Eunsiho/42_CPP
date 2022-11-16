/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:48:34 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 16:53:13 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name)
{ };

HumanB::~HumanB() {};

void HumanB::attack(void)
{
	if (!this->weapon)
	{
		std::cout << '<' << this->name << '>';
		std::cout << " can't attack" << std::endl;
	} 
	else
	{
		std::cout << '<' << this->name << '>';
		std::cout << " attacks with their ";
		std::cout << '<' << this->weapon->getType() << '>' << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}