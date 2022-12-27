/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:38 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:40:38 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& obj)
	: Animal(obj._type)
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(const Dog& ref)
{
	this->_type = ref._type;
	for (int index = 0; index < 100; ++index)
		this->_brain->setIdea(ref._brain->getIdea(index), index);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "bow-wow" << std::endl;
}
