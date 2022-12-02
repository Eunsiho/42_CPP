/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/02 18:45:52 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signable;
	const int			_executable;
public:
	AForm(std::string name, int signable, int executable);
	AForm();
	AForm(const AForm& obj);
	virtual ~AForm();
	AForm& operator=(const AForm& obj);

	std::string		getName() const;
	bool			getSigned() const;
	int				getSignable() const;
	int				getExecutable() const;

	void			beSigned(const Bureaucrat& obj);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	void			checkRequirements(const Bureaucrat& executor) const;

	class GradeTooHighException : public std::exception
	{
		const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char*	what() const throw();
	};
	class UnsignedFormException : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& ostm, const AForm& obj);

#endif
