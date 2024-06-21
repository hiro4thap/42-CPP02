/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:35 by hiono             #+#    #+#             */
/*   Updated: 2024/06/21 18:38:30 by vboxuser         ###   ########.fr       */
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
	Fixed& operator=(const Fixed &rhs) const;
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_fixed_point_value;
	static const int _fractional_bits = 8;
};

#endif
