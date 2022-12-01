/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:46:48 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/01 17:30:51 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
	: _name("nameless"), _grade(1)
{
};

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
	: _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw (GradeTooHighException());
	else if (this->_grade < 1)
		throw (GradeTooLowException());
};

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	this->_grade = obj.getGrade();
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw (GradeTooHighException());
	else
		--this->_grade;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw (GradeTooLowException());
	else
		++this->_grade;
}

std::ostream& operator<<(std::ostream &ostm, const Bureaucrat& obj)
{
	ostm << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
	return (ostm);
}