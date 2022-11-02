/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:44:00 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/03 02:52:57 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
	Weapon	club("crude spiked club");
	HumanA	bob("bob", club);
	bob.attack();

	Weapon	knife("sharp bloody jack knife");
	HumanB	hogkim("hogkim");
	hogkim.setWeapon(knife);
	hogkim.attack();
	return (0);
}
