/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:46:51 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/23 14:42:46 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& obj);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &obj);
	
	class GradeTooHighException : public std::exception
	{};
	
	class GradeTooLowException : public std::exception
	{};

	std::string	getName() const;
	int			getGrade() const;		
	void		incrementGrade();
	void		decrementGrade();	
};


#endif