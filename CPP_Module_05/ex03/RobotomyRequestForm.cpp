/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:30:04 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/06 16:13:44 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy", 72, 45), _target(target)
{}
RobotomyRequestForm::RobotomyRequestForm()
	: AForm("Default Robotomy", 72, 45), _target("default")
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
	: AForm("Default Robotomy", 72, 45), _target(obj._target)
{}
RobotomyRequestForm::~RobotomyRequestForm()
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	this->_target = obj._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkRequirements(executor);
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << ": ZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
	else
		std::cout << this->_target << " is failed to robotimized" << std::endl;
}
