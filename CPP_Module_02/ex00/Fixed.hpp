/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:48:22 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 13:49:58 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					value;
	static const int	fraction = 8;
public:
	Fixed(void);
	Fixed(const Fixed& obj);
	Fixed&	operator=(const Fixed& obj);
	~Fixed(void);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif