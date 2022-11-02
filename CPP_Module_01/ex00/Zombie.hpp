/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:00:56 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/03 02:10:52 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name;

	void	print_name(void);
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	announce(void);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
