/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:30:35 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
	: Animal(obj._type)
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "mew-mew" << std::endl;
}
