/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:35 by hiono             #+#    #+#             */
/*   Updated: 2024/06/19 16:39:11 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_FIXED_HPP
# define H_FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &rhs);
	Fixed& operator=(const Fixed &rhs);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_fixed_point_value;
	static const int _fractional_bits = 8;
};

#endif
