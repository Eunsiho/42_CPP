/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:45:58 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/18 03:23:40 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("nameless"), _health(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap" << this->_name << "has spawned" << std::endl;
};

ClapTrap::ClapTrap(std::string name)
	: _name(name), _health(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap" << this->_name << "has spawned" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& obj)
	: _name(obj._name), _health(obj._health), _energy(obj._energy), _ad(obj._ad)
{
	std::cout << "ClapTrap" << this->_name << "has spawned" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap" << this->_name << "has detroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_health = ref._health;
	this->_energy = ref._energy;
	this->_ad = ref._ad;
	std::cout << "ClapTrap" << this->_name << "has called operator=" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_health || !this->_energy)
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}

// void	ClapTrap::takeDamage(unsigned int amount)
// {

// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	if (!this->_health || !this->_energy)
// 		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
// 	else
// 	{
		
// 	}
// }

