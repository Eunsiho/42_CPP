/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:37:11 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& obj)
	: Animal(obj._type)
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat& ref)
{
	this->_type = ref._type;
	for (int index = 0; index < 100; ++index)
		this->_brain->setIdea(ref._brain->getIdea(index), index);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "mew-mew" << std::endl;
}
