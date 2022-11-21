/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/20 16:10:35 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat default Constructor has been called" << std::endl;
};


Cat::Cat(const Cat& obj)
{
	this->_type = obj._type;
	std::cout << "Cat Constructor has been called" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat Destructor has been called" << std::endl;
};

Cat& Cat::operator=(const Cat& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "mew-mew" << std::endl;
}
