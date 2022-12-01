/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/02 00:18:14 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int signable, int executable)
	: _name(name), _signable(signable), _executable(executable)
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
	: _name(obj.getName()), _signed(obj.getSigned()), _signable(obj.getSignable()), _executable(obj.getExecutable())
{ }

Form::~Form()
{ }

Form& Form::operator=(const Form& obj)
{
	*(const_cast<std::string*>(&this->_name)) = obj.getName();
	this->_signed = obj._signed;
	*(const_cast<int*>(&this->_signable)) = obj.getSignable();
	*(const_cast<int*>(&this->_executable)) = obj.getExecutable();
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for Form");
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
		std::cout << "This form is already signed" << std::endl;
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
	<< "signed: " << beSigned << std::endl;
	return (ostm);
}