/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:41:03 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/21 19:54:44 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// a, b, c: vertices of triangle
// point: point to check
// Return: True if point is insed, False otherwise.
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area1 = Point::area(a, b, point);
	Fixed	area2 = Point::area(b, c, point);
	Fixed	area3 = Point::area(c, a, point);
	Fixed	areasum = Point::area(a, b, c);
	return Fixed(0) < area1
		&& Fixed(0) < area2
		&& Fixed(0) < area3
		&& area1 + area2 + area3 == areasum;
}
