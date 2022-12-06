/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:10:29 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/06 20:18:02 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& obj);
	~Intern();
	Intern& operator=(const Intern& obj);

	AForm*	makeForm(std::string form, std::string target);

	class WrongNameException : public std::exception
	{
	public:
		const char*	what() const throw();
	};
};

#endif
