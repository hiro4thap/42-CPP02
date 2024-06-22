/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:41:03 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/22 17:06:01 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Porvided vertices A(x1, y1), B(x2, y2), and C(x3, y3)
// (ΔABC) = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|
float	area(const Point a, const Point b, const Point c)
{
	const float	area =
		(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;
	return 0 < area ? area : -area; 
}

// a, b, c:	vertices of triangle
// point:	point to check
// Return:	True if point is insed, False otherwise.
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	const float	area1 = area(a, b, point);
	const float	area2 = area(b, c, point);
	const float	area3 = area(c, a, point);
	const float	areasum = area(a, b, c);
	return  area1
			&& area2
			&& area3
			&& area1 + area2 + area3 == areasum;
}
