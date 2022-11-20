/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:50:30 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/20 16:10:44 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: _type("Animal")
{
	std::cout << "Animal Default Constructor has been called" << std::endl;
};


Animal::Animal(const Animal& obj)
	: _type(obj._type)
{
	std::cout << "Animal Constructor has been called" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal Destructor has been called" << std::endl;
};

Animal& Animal::operator=(const Animal& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Animal::makeSound() const
{ }

std::string Animal::getType() const
{
	return (this->_type);
}
