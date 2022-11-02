/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:12 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/03 02:10:58 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void Zombie::print_name(void)
{
	std::cout << '<' << this->name << '>';
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie() {};

Zombie::~Zombie()
{
	print_name();
	std::cout << " Bye bye.." << std::endl;
}

void Zombie::announce(void)
{
	print_name();
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}