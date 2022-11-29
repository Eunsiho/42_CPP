/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:50:30 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 15:15:47 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
};


WrongAnimal::WrongAnimal(const WrongAnimal& obj)
	: _type(obj._type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Can't make sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
