/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:00:56 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 13:51:39 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
