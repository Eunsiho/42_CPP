/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:45:58 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/21 15:37:11 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " | default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " | constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
	: _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " | copy constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " | destructor has been called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "ClapTrap" << this->_name << " | operator= has been called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	real_damage = amount;

	if (this->_hitPoints < amount)
		real_damage = this->_hitPoints;
	std::cout << "ClapTrap " << this->_name << " has taked " << amount << " damage!" << std::endl;
	this->_hitPoints -= real_damage;
	if (!this->_hitPoints)
		std::cout << "ClapTrap " << this->_name << " has died" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	real_repair = amount;
	
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_hitPoints == 10)
		std::cout << "ClapTrap " << this->_name << " don't need repair" << std::endl;
	else if (this->_hitPoints + amount > 10)
	{
		real_repair = 10 - this->_hitPoints;
		this->_hitPoints += real_repair;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
	else
	{
		this->_hitPoints += real_repair;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
		std::cout << "ClapTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
}
