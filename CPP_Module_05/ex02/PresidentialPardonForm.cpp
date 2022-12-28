/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:48:52 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/28 16:51:41 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardon", 25, 5), _target(target)
{}
PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardon", 25, 5), _target("default")
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	: AForm("PresidentialPardon", 25, 5), _target(obj._target)
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
	this->checkRequirements(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
