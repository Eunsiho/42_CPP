/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:17:32 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/28 18:56:57 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern& obj)
{
	static_cast<void>(obj);
}
Intern::~Intern()
{}
Intern& Intern::operator=(const Intern& obj)
{
	static_cast<void>(obj);
	return (*this);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	int	index = -1;
	std::string	temp[3] = {"presidential", "robotomy","shrubbery"};

	for (int i = 0; i < 3; ++i)
		if (form == temp[i])
			index = i;
	if (index > -1)
		std::cout << "Intern creates " << temp[index] << " form" << std::endl;
	switch (index)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
	}
	throw (WrongNameException());
}

const char* Intern::WrongNameException::what() const throw()
{
	return ("Intern : I don't know what it is");
}
