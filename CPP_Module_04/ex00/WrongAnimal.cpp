/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:50:30 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/20 16:11:01 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor has been called" << std::endl;
};


WrongAnimal::WrongAnimal(const WrongAnimal& obj)
	: _type(obj._type)
{
	std::cout << "WrongAnimal Constructor has been called" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{ }

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
