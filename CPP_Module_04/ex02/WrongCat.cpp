/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/22 14:43:12 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default has been constructed" << std::endl;
};


WrongCat::WrongCat(const WrongCat& obj)
{
	this->_type = obj._type;
	std::cout << "WrongCat has been constructed" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destructed" << std::endl;
};

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	this->_type = ref._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "mmmmmmmmmmmmmmmeeeeewwwwwww-mmmmmmeeew" << std::endl;
}
