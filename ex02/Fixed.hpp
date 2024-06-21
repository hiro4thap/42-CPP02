/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:35 by hiono             #+#    #+#             */
/*   Updated: 2024/06/21 18:39:03 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_FIXED_HPP
# define H_FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &rhs);
	Fixed	&operator=(const Fixed &rhs) const;
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;
	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &rhs) const;
	Fixed	operator*(const Fixed &rhs) const;
	Fixed	operator/(const Fixed &rhs) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	~Fixed();

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);

private:
	int	_fixed_point_value;
	static const int _fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &rhs);


#endif
