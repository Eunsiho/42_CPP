/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:40:04 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 19:47:35 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat	bu1("hogkim", 5);
		// Bureaucrat	bu2("hogkim2", 5);
		Form		f1("tyrenol", 4, 20);
		// Form		f2("tyrenol", 4, 20);

		bu1.incrementGrade();
		std::cout << bu1 << std::endl;
		std::cout << f1 << std::endl;
		f1.beSigned(bu1);
		// f2.beSigned(bu2);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
