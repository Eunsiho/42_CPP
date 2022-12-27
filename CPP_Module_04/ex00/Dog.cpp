/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:38 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:30:58 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
	: Animal(obj._type)
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "bow-wow" << std::endl;
}
