/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:48:22 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 14:12:31 by hogkim           ###   ########.fr       */
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

	bool	operator>(const Fixed& obj) const;
	bool	operator<(const Fixed& obj) const;
	bool	operator>=(const Fixed& obj) const;
	bool	operator<=(const Fixed& obj) const;
	bool	operator==(const Fixed& obj) const;
	bool	operator!=(const Fixed& obj) const;
	Fixed	operator+(const Fixed& obj) const;
	Fixed	operator-(const Fixed& obj) const;
	Fixed	operator*(const Fixed& obj) const;
	Fixed	operator/(const Fixed& obj) const;
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	static Fixed&		min(Fixed &obj1, Fixed &obj2);
	static const Fixed&	min(const Fixed &obj1, const Fixed &obj2);
	static Fixed&		max(Fixed &obj1, Fixed &obj2);
	static const Fixed&	max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream&	operator<<(std::ostream& ostm, const Fixed& obj);

#endif