/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:44:23 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/21 15:37:29 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	c1("c1");
	ScavTrap	s2("s2");

	c1.takeDamage(7);
	c1.beRepaired(2);
	c1.attack("enemy");
	s2.takeDamage(20);
	s2.guardGate();
	s2.beRepaired(5);
	s2.attack("enemy");
	c1.beRepaired(10);
	s2.beRepaired(5);
	s2.guardGate();
	s2.guardGate();
	return (0);
}
