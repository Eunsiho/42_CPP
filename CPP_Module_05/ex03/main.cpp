/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:40:04 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/06 20:23:35 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// int main(void)
// {
// 	try
// 	{
// 		Bureaucrat				bu1("hogkim", 5);
// 		Bureaucrat				bu2("hhokim", 40);
// 		PresidentialPardonForm	pForm("1st");
// 		RobotomyRequestForm		rForm("2nd");
// 		ShrubberyCreationForm	sForm("3rd");

// 		pForm.beSigned(bu1);
// 		pForm.execute(bu1);

// 		rForm.beSigned(bu1);
// 		rForm.execute(bu1);

// 		sForm.beSigned(bu1);
// 		sForm.execute(bu1);

// 		pForm.beSigned(bu2);
// 		pForm.execute(bu2);

// 		rForm.beSigned(bu2);
// 		rForm.execute(bu2);

// 		sForm.beSigned(bu2);
// 		sForm.execute(bu2);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (0);
// }

int main(void)
{
	try
	{
		Intern		i1;
		AForm		*ptr;
		Bureaucrat	b1("hogkim", 64);
		Bureaucrat	b2("jkwak", 4);
		
		ptr = i1.makeForm("robotoy", "Bender");
		ptr->beSigned(b1);
		ptr->execute(b2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}