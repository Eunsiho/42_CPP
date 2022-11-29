/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:50:30 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 15:16:03 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
};


Animal::Animal(const Animal& obj)
	: _type(obj._type)
{
	std::cout << "Animal constructor called" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
};

Animal& Animal::operator=(const Animal& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Can't make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
