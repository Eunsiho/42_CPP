/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:44:23 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/19 21:43:11 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	c1("c1");
	FragTrap	f2("s2");

	c1.takeDamage(7);
	c1.beRepaired(2);
	c1.attack("enemy");
	f2.takeDamage(20);
	f2.beRepaired(5);
	f2.attack("enemy");
	c1.beRepaired(10);
	f2.beRepaired(5);
	f2.highFivesGuys();
	return (0);
}