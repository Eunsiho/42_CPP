/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:52:00 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/05 15:22:22 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

	void	execute(Bureaucrat const & executor) const;

	class FileOpenFailException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif
