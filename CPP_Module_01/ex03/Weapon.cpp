/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:20:35 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 16:43:24 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() {};

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}