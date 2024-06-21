/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:22:32 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/21 20:00:50 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_POINT_HPP
# define H_POINT_HPP

# include "Fixed.hpp"

class	Point
{
public:
	Point();
	Point(float x, float y);
	Point(const Point &hrs);
	Point	&operator=(const Point &hrs);
	~Point();
	Fixed	getX() const;
	Fixed	getY() const;
	static Fixed	area(const Point a, const Point b, const Point c);

private:
	const Fixed	_x;
	const Fixed	_y;
};

#endif
