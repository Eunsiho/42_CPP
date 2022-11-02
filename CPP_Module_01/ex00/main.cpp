/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:09 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/02 21:01:10 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*my_zombie;

	my_zombie = newZombie("my_zombie");
	my_zombie->announce();
	randomChump("temp_zombie");
	delete my_zombie;
	return (0);
}
