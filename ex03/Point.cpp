/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:26:44 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/21 20:02:58 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	_x = Fixed(0);
	_y = Fixed(0);
}

Point::Point(float x, float y)
{
	_x = Fixed(x);
	_y = Fixed(y);
}

Point::Point(const Point &hrs)
{
	_x = hrs.getX();
	_y = hrs.getY();
}

Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
		*this = Point(rhs);
	return *this;
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}

Fixed	Point::area(const Point a, const Point b, const Point c)
{
	Fixed const	area = Fixed(a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY())) / 2;
	return Fixed(0) < area ? area : Fixed(0) - area;
}	
