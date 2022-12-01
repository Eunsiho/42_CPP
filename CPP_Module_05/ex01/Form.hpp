/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/01 17:36:58 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signable;
	const int			_executable;
public:
	Form(std::string name, int signable, int executable);
	Form();
	Form(const Form& obj);
	~Form();
	Form& operator=(const Form& obj);

	class GradeTooHighException : public std::exception
	{
		const char*	what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		const char*	what() const throw();
	};

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignable() const;
	int			getExecutable() const;
};

std::ostream&	operator<<(std::ostream& ostm, const Form& obj);

#endif
