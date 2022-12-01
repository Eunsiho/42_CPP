/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:46:51 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/01 17:32:55 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& obj);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& obj);
	
	class GradeTooHighException : public std::exception
	{
		const char*	what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		const char*	what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;		
	void		incrementGrade();
	void		decrementGrade();	
};

std::ostream&	operator<<(std::ostream& ostm, const Bureaucrat& obj);

#endif