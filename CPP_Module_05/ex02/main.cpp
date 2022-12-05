/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:40:04 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/05 19:47:59 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat				bu1("hogkim", 5);
		ShrubberyCreationForm	f1("sol");
		RobotomyRequestForm		r2("hop");

		bu1.incrementGrade();
		
		f1.beSigned(bu1);
		f1.execute(bu1);

		r2.beSigned(bu1);
		r2.execute(bu1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}