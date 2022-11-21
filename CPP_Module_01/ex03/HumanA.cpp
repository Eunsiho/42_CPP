/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:12:11 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 14:04:00 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{ };

HumanA::~HumanA() {};

void HumanA::attack(void)
{
	std::cout << '<' << this->_name << '>';
	std::cout << " attacks with their ";
	std::cout << '<' << this->_weapon.getType() << '>' << std::endl;
}