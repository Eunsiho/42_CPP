/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:04:15 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/04 18:28:56 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if (argc != 2)
		std::cout << "Wrong Arguments"  << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}