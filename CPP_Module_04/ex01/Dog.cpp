/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:38 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 15:17:10 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
};


Dog::Dog(const Dog& obj)
{
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
	std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
};

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
