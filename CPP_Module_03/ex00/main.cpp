/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:44:23 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/21 15:37:35 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	c1("c1");
	ClapTrap	c2("c2");

	c1.takeDamage(7);
	c1.beRepaired(2);
	c1.attack("enemy");
	c1.takeDamage(4);
	c1.beRepaired(20);
	c2.takeDamage(20);
	c2.beRepaired(5);
	c2.attack("enemy");
	c1.beRepaired(10);
	c2.beRepaired(5);
	return (0);
}
