/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:45:58 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/27 19:39:18 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	this->_name = "nameless";
	this->_health = 100;
	this->_energy = 50;
	this->_ad = 20;
	this->_guardGate = false;
	std::cout << "The Defalut constructor of a ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_ad = 20;
	this->_guardGate = false;
	std::cout << "ScavTrap" << this->_name << " | constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_ad = obj._ad;
	this->_guardGate = obj._guardGate;
	std::cout << "ScavTrap" << this->_name << " | copy constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " | destrusctor has been called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	this->_name = ref._name;
	this->_health = ref._health;
	this->_energy = ref._energy;
	this->_ad = ref._ad;
	this->_guardGate = ref._guardGate;
	std::cout << "ScavTrap" << this->_name << " | operator= has been called" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->_health || !this->_energy)
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	real_damage = amount;

	if (this->_health < amount)
		real_damage = this->_health;
	std::cout << "ScavTrap " << this->_name << " has taked " << amount << " damage!" << std::endl;
	this->_health -= real_damage;
	if (!this->_health)
		std::cout << "ScavTrap " << this->_name << " has died" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	real_repair = amount;

	if (!this->_health || !this->_energy)
	{
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_health == 100)
		std::cout << "ScavTrap " << this->_name << " don't need repair" << std::endl;
	else if (this->_health + amount > 100)
	{
		real_repair = 100 - this->_health;
		this->_health += real_repair;
		std::cout << "ScavTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
	else
	{
		this->_health += real_repair;
		std::cout << "ScavTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (!this->_health || this->_energy)
	{
		std::cout << "ScavTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_guardGate == false)
	{
		this->_guardGate = true;
		this->_energy -= 1;
		std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode." << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
	else
	{
		this->_guardGate = false;
		this->_energy -= 1;
		std::cout << "ScavTrap " << this->_name << " is now in normal mode" << std::endl;
		std::cout << "ScavTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

