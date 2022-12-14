/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:48:22 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/14 12:24:34 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fraction = 8;
public:
	Fixed(void);
	Fixed(const Fixed& obj);
	Fixed&	operator=(const Fixed& obj);
	Fixed(const int integerValue);
	Fixed(const float floatValue);
	~Fixed(void);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& ostm, const Fixed& obj);

#endif