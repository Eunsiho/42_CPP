/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:12:11 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 16:41:54 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: name(name), weapon(weapon)
{ };

HumanA::~HumanA() {};

void HumanA::attack(void)
{
	std::cout << '<' << this->name << '>';
	std::cout << " attacks with their ";
	std::cout << '<' << this->weapon.getType() << '>' << std::endl;
}