/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:09 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 16:36:37 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(7, "my_zombie");
	for (int i = 0; i < 7; ++i)
		zombies[i].announce();
	delete []zombies;
	return (0);
}
