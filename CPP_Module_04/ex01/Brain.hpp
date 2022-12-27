/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:50:14 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:17:56 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain& obj);
	~Brain();
	Brain&	operator=(const Brain& ref);

	void		setIdea(std::string idea, int index);
	std::string	getIdea(int index) const;
};

#endif
