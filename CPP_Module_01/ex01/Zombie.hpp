/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:00:56 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 16:36:15 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	announce(void);
	void	set_name(std::string name);
};

Zombie	*newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
