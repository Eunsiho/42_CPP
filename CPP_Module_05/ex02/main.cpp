/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:40:04 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/28 17:00:13 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat				bu1("hogkim", 5);
		Bureaucrat				bu2("hogkim2", 40);
		PresidentialPardonForm	pForm("1st");
		RobotomyRequestForm		rForm("2nd");
		ShrubberyCreationForm	sForm("3rd");

		bu1.signForm(pForm);
		bu1.executeForm(pForm);

		bu1.signForm(rForm);
		bu1.executeForm(rForm);

		bu2.signForm(sForm);
		bu2.executeForm(sForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
