/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:20:21 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/21 15:35:55 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " | default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap" << this->_name << " | constructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	std::cout << "FragTrap" << this->_name << " | copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " | destrusctor has been called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	std::cout << "FragTrap" << this->_name << " | operator= has been called" << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	real_damage = amount;

	if (this->_hitPoints < amount)
		real_damage = this->_hitPoints;
	std::cout << "FragTrap " << this->_name << " has taked " << amount << " damage!" << std::endl;
	this->_hitPoints -= real_damage;
	if (!this->_hitPoints)
		std::cout << "FragTrap " << this->_name << " has died" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	real_repair = amount;

	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_hitPoints == 100)
		std::cout << "FragTrap " << this->_name << " don't need repair" << std::endl;
	else if (this->_hitPoints + amount > 100)
	{
		real_repair = 100 - this->_hitPoints;
		this->_hitPoints += real_repair;
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
	else
	{
		this->_hitPoints += real_repair;
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_hitPoints << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energyPoints << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::string	temp;

	if (!this->_hitPoints)
	{
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " : gimme five!" << std::endl;
	std::cout << "accept? [Y/N]" << std::endl;
	std::getline(std::cin, temp);
	if (temp == "Y" || temp == "y")
		std::cout << "High five!" << std::endl;
	else 
		std::cout << "FragTrap " << this->_name << " feels sad..." << std::endl;
}
