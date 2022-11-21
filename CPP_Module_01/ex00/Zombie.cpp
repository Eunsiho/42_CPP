/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:12 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 13:56:38 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
	: _name("nameless")
{
	std::cout << "Zombie default constructor has been called" << std::endl;
}

Zombie::Zombie(std::string name)
	: _name(name)
{
	std::cout << this->_name << " | Zombie constructor has been called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " | Zombie destructor has been called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}