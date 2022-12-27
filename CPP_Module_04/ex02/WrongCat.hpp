/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:50:32 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/27 14:38:42 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& obj);
	~WrongCat();

	WrongCat&	operator=(const WrongCat& ref);
	void	makeSound() const;
};

#endif
