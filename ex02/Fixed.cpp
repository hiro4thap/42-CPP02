/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:30 by hiono             #+#    #+#             */
/*   Updated: 2024/06/22 14:58:54 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point_value = 0;
}

Fixed::Fixed(const int number)
{
	_fixed_point_value = number << _fractional_bits;
}

Fixed::Fixed(const float number)
{
	_fixed_point_value = std::roundf(number * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &rhs)
{
	_fixed_point_value = rhs.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		_fixed_point_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return _fixed_point_value > rhs.getRawBits();
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return _fixed_point_value < rhs.getRawBits();
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return _fixed_point_value >= rhs.getRawBits();
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return _fixed_point_value <= rhs.getRawBits();
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return _fixed_point_value == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return _fixed_point_value != rhs.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;
	result.setRawBits(_fixed_point_value + rhs.getRawBits());
	return result;
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;
	result.setRawBits(_fixed_point_value - rhs.getRawBits());
	return result;
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(static_cast<float>(this->toFloat() * rhs.toFloat()));
	return result;
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(static_cast<float>(this->toFloat() / rhs.toFloat()));
	return result;
}

Fixed&	Fixed::operator++()
{
	++_fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--_fixed_point_value;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	_fixed_point_value++;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	_fixed_point_value--;
	return temp;
}

Fixed::~Fixed(void)
{
}

int		Fixed::getRawBits(void) const
{
	return _fixed_point_value;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_fixed_point_value) / (1 << _fractional_bits);
}

int		Fixed::toInt(void) const
{
	return _fixed_point_value >> _fractional_bits;
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return lhs < rhs ? lhs : rhs;
}	

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return lhs < rhs ? lhs : rhs;
}	

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return lhs < rhs ? rhs : lhs;
}	

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return lhs < rhs ? rhs : lhs;
}	

std::ostream	&operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return out;
}
