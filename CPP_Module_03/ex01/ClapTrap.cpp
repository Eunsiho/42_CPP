/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:45:58 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/27 19:39:19 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("nameless"), _health(10), _energy(10), _ad(0)
{
	std::cout << "The Defalut constructor of a ClapTrap has been called" << std::endl;
};

ClapTrap::ClapTrap(std::string name)
	: _name(name), _health(10), _energy(10), _ad(0)
{
	std::cout << "ClapTrap " << this->_name << " | constructor has been called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& obj)
	: _name(obj._name), _health(obj._health), _energy(obj._energy), _ad(obj._ad)
{
	std::cout << "ClapTrap " << this->_name << " | copy constructor has been called" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " | destructor has been called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_health = ref._health;
	this->_energy = ref._energy;
	this->_ad = ref._ad;
	std::cout << "ClapTrap" << this->_name << " | operator= has been called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_health || !this->_energy)
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	real_damage = amount;

	if (this->_health < amount)
		real_damage = this->_health;
	std::cout << "ClapTrap " << this->_name << " has taked " << amount << " damage!" << std::endl;
	this->_health -= real_damage;
	if (!this->_health)
		std::cout << "ClapTrap " << this->_name << " has died" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	real_repair = amount;
	
	if (!this->_health || !this->_energy)
	{
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_health == 10)
		std::cout << "ClapTrap " << this->_name << " don't need repair" << std::endl;
	else if (this->_health + amount > 10)
	{
		real_repair = 10 - this->_health;
		this->_health += real_repair;
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
	else
	{
		this->_health += real_repair;
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

