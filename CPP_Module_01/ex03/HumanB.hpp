/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 02:12:48 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 14:04:37 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif