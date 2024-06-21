/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:30 by hiono             #+#    #+#             */
/*   Updated: 2024/06/21 18:38:41 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << "\n";
	_fixed_point_value = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << "\n";
	_fixed_point_value = number << _fractional_bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << "\n";
	_fixed_point_value = std::roundf(number * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << "\n";
	_fixed_point_value = rhs.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &rhs) const
{
	std::cout << "Copy assignment operator called" << "\n";
	if (this != &rhs)
		_fixed_point_value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << "\n";
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

std::ostream	&operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return out;
}
