/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:01:09 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/02 21:33:27 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::setw(50) << "The memory address of the string variable. : ";
	std::cout << &str << std::endl;
	std::cout << std::setw(50) << "The memory address held by stringPTR. : ";
	std::cout << stringPTR << std::endl;
	std::cout << std::setw(50) << "The memory address held by stringREF. : ";
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << std::setw(50) << "The value of the string variable. : ";
	std::cout << str << std::endl;
	std::cout << std::setw(50) << "The value pointed to by stringPTR. : ";
	std::cout << *stringPTR << std::endl;
	std::cout << std::setw(50) << "The value pointed to by stringREF. : ";
	std::cout << stringREF << std::endl;
	return (0);
}
