/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:46:48 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/23 14:46:38 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
	: _name("nameless"), _grade(1)
{
	std::cout << "Default constructor of Bureaucrat has been called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
	: _name(name), _grade(grade);
{
	std::cout << "Constructor of Bureaucrat has been called" << std::endl;
};