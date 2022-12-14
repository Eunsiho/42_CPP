/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/28 16:46:36 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int signable, int executable)
	: _name(name), _signed(false), _signable(signable), _executable(executable)
{
	if (signable < 1 || executable < 1)
		throw (GradeTooHighException());
	else if (signable > 150 || executable > 150)
		throw (GradeTooLowException());
}
AForm::AForm()
	: _name("nameless"), _signed(false), _signable(1), _executable(1)
{ }
AForm::AForm(const AForm& obj)
	: _name(obj._name), _signed(obj._signed), _signable(obj._signable), _executable(obj._executable)
{ }
AForm::~AForm()
{ }
AForm& AForm::operator=(const AForm& obj)
{
	this->_signed = obj._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}
bool AForm::getSigned() const
{
	return (this->_signed);
}
int AForm::getSignable() const
{
	return (this->_signable);
}
int AForm::getExecutable() const
{
	return (this->_executable);
}

void AForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > this->getSignable())
		throw (GradeTooLowException());
	else if (this->_signed == false)
		this->_signed = true;
	else
		throw (AleradySignedException());
}

void AForm::checkRequirements(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw (UnsignedFormException());
	if (executor.getGrade() > this->getExecutable())
		throw (GradeTooLowException());
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the Form");
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the Form");
}
const char* AForm::AleradySignedException::what() const throw()
{
	return ("the form is already signed");
}
const char* AForm::UnsignedFormException::what() const throw()
{
	return ("This form is unsigned");
}

std::ostream& operator<<(std::ostream& ostm, const AForm& obj)
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
