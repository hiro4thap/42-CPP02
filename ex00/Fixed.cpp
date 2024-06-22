/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:30 by hiono             #+#    #+#             */
/*   Updated: 2024/06/22 14:58:14 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point_value = 0;
	std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << "\n";
	_fixed_point_value = rhs.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &rhs)
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
	std::cout << "getRawBits member function called" << "\n";
	return _fixed_point_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << "\n";
	_fixed_point_value = raw;
}
