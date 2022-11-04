/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:03:50 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/04 01:25:40 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
	std::string	level[4];
	void		(Harl::*funcPtr[4])( void );
	
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
public:
	Harl();
	~Harl();
	void	complain( std::string level );
};

#endif