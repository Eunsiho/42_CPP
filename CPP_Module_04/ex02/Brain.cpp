/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:50:15 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/22 14:43:12 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default has been constructed" << std::endl;
	for (int index = 0; index < 99; ++index)
		this->ideas[index] = "[empty]";
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain has been constructed" << std::endl;
	for (int index = 0; index < 99; ++index)
		this->ideas[index] = obj.ideas[index];
}

Brain::~Brain()
{
	std::cout << "Brain has been destructed" << std::endl;
};

Brain&	Brain::operator=(const Brain& ref)
{
	std::cout << "Brain operator= has been called" << std::endl;
	for (int index = 0; index < 99; ++index)
		this->ideas[index] = ref.ideas[index];
	return (*this);
}

void	Brain::setIdea(std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	return (this->ideas[index]);
}
