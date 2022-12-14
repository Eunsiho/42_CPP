/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/28 16:18:27 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int signable, int executable)
	: _name(name), _signed(false), _signable(signable), _executable(executable)
{
	if (signable < 1 || executable < 1)
		throw (GradeTooHighException());
	else if (signable > 150 || executable > 150)
		throw (GradeTooLowException());
}

Form::Form()
	: _name("nameless"), _signed(false), _signable(1), _executable(1)
{ }

Form::Form(const Form& obj)
	: _name(obj._name), _signed(obj._signed), _signable(obj._signable), _executable(obj._executable)
{ }

Form::~Form()
{ }

Form& Form::operator=(const Form& obj)
{
	this->_signed = obj._signed;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the Form");
}
const char* Form::AleradySignedException::what() const throw()
{
	return ("the form is already signed");
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignable() const
{
	return (this->_signable);
}

int Form::getExecutable() const
{
	return (this->_executable);
}

void Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > this->getSignable())
		throw (GradeTooLowException());
	else if (this->_signed == false)
		this->_signed = true;
	else
		throw (AleradySignedException());
}

std::ostream& operator<<(std::ostream& ostm, const Form& obj)
{
	std::string	beSigned;
	
	if (obj.getSigned() == false)
		beSigned = "no";
	else
		beSigned = "yes";
	ostm << "form name: "<<obj.getName() << std::endl
	<< "signable grade: " << obj.getSignable()<< std::endl
	<< "executable grade: " << obj.getExecutable() << std::endl
	<< "signed: " << beSigned;
	return (ostm);
}
