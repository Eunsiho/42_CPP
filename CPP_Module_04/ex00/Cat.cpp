/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/22 14:43:12 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat default has been constructed" << std::endl;
};


Cat::Cat(const Cat& obj)
{
	this->_type = obj._type;
	std::cout << "Cat has been constructed" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat has been destructed" << std::endl;
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
