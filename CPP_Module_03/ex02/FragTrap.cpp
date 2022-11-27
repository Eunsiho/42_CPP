/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:20:21 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/27 19:42:58 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "nameless";
	this->_health = 100;
	this->_energy = 100;
	this->_ad = 30;
	std::cout << "The Defalut constructor of a FragTrap has been called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_ad = 30;
	std::cout << "FragTrap" << this->_name << " | constructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_ad = obj._ad;
	std::cout << "FragTrap" << this->_name << " | copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " | destrusctor has been called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	this->_name = ref._name;
	this->_health = ref._health;
	this->_energy = ref._energy;
	this->_ad = ref._ad;
	std::cout << "FragTrap" << this->_name << " | operator= has been called" << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (!this->_health || !this->_energy)
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
	else
	{
		this->_energy -= 1;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	real_damage = amount;

	if (this->_health < amount)
		real_damage = this->_health;
	std::cout << "FragTrap " << this->_name << " has taked " << amount << " damage!" << std::endl;
	this->_health -= real_damage;
	if (!this->_health)
		std::cout << "FragTrap " << this->_name << " has died" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	real_repair = amount;

	if (!this->_health || !this->_energy)
	{
		std::cout << "FragTrap " << this->_name << " can't do anything" << std::endl;
		return ;
	}
	if (this->_health == 100)
		std::cout << "FragTrap " << this->_name << " don't need repair" << std::endl;
	else if (this->_health + amount > 100)
	{
		real_repair = 100 - this->_health;
		this->_health += real_repair;
		this->_energy -= 1;
		std::cout << "FragTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
	else
	{
		this->_health += real_repair;
		this->_energy -= 1;
		std::cout << "FragTrap " << this->_name << " has repaired " << real_repair << " hit points." << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current hit points is " << this->_health << std::endl;
		std::cout << "FragTrap " << this->_name << "'s current energy points is " << this->_energy << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::string	temp;

	if (!this->_health)
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