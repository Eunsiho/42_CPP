/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:48:17 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/17 21:58:46 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
};

Fixed::Fixed(const Fixed& obj)
	: value(obj.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.getRawBits();
	return (*this);
}

Fixed::Fixed(const int integerValue)
	: value(integerValue << this->fraction)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue)
	: value((int)(roundf(floatValue * (1 << this->fraction))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << this->fraction));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->fraction);
}

bool Fixed::operator>(const Fixed& obj) const
{
	if (this->value > obj.value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& obj) const
{
	if (this->value < obj.value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj) const
{
	if (this->value >= obj.value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& obj) const
{
	if (this->value <= obj.value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj) const
{
	if (this->value == obj.value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj) const
{
	if (this->value != obj.value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& obj) const
{
		Fixed	result;
		
		result.value = this->value + obj.value;
		return (result);
}

Fixed Fixed::operator-(const Fixed& obj) const
{
	Fixed	result;
	
	result.value = this->value - obj.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed& obj) const
{
	Fixed	result;
	
	result.value = this->value * obj.value;
	return (result);
}

Fixed Fixed::operator/(const Fixed& obj) const
{
	Fixed	result;
	
	result.value = this->value / obj.value;
	return (result);
}

Fixed& Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	const Fixed	original(*this);
	this->value += 1;
	return original;
}

Fixed& Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	const Fixed	original(*this);
	this->value -= 1;
	return original;
}

Fixed Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

std::ostream& operator<<(std::ostream& ostm, const Fixed& obj)
{
	ostm << obj.toFloat();
	return (ostm);
}