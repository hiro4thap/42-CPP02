/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:35 by hiono             #+#    #+#             */
/*   Updated: 2024/06/22 17:07:10 by dev              ###   ########.fr       */
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
	Fixed& operator=(const Fixed &rhs);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int	_fixed_point_value;
	static const int _fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &rhs);

#endif
