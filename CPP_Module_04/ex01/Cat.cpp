/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/23 16:11:10 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default has been constructed" << std::endl;
};


Cat::Cat(const Cat& obj)
{
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
	std::cout << "Cat has been constructed" << std::endl;
};

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat has been destructed" << std::endl;
};

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
