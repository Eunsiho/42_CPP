/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:48:52 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/05 19:59:09 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Default PresidentialPardon", 25, 5), _target(target)
{}
PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Default PresidentialPardon", 25, 5), _target("default")
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	: AForm("Default PresidentialPardon", 25, 5), _target(obj._target)
{}
PresidentialPardonForm::~PresidentialPardonForm()
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	this->_target = obj._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	
}