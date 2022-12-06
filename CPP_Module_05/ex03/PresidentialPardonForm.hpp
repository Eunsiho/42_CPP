/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:48:54 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/05 19:58:31 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

	void	execute(Bureaucrat const & executor) const;
};

#endif
