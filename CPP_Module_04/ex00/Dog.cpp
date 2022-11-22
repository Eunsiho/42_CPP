/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:38 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/22 14:43:12 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog default has been constructed" << std::endl;
};


Dog::Dog(const Dog& obj)
{
	this->_type = obj._type;
	std::cout << "Dog has been constructed" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog has been destructed" << std::endl;
};

Dog& Dog::operator=(const Dog& ref)
{
	this->_type = ref._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "bow-wow" << std::endl;
}
