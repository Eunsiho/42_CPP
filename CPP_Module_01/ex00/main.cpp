/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:09 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 16:27:13 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*my_zombie;

	my_zombie = newZombie("my_zombie");
	my_zombie->announce();
	randomChump("my_zombie2");
	delete my_zombie;
	return (0);
}
