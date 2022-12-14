/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:06:43 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 16:39:32 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType() const;
	void				setType(std::string type);
};

#endif