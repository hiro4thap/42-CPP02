/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:26:44 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/22 16:57:23 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
	:_x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(float x, float y)
	:_x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point &hrs)
	:_x(Fixed(hrs.getX())), _y(Fixed(hrs.getY()))
{
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
