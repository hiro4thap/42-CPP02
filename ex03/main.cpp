/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:56:40 by hiono             #+#    #+#             */
/*   Updated: 2024/06/24 11:35:55 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point p1(0, 0);
	Point p2(2, 1);
	Point p3(1, 3);
	for (float y = 4; 0 <= y; y -= 0.1)
	{
		for (float x = 0; x <= 4; x += 0.1)
			std::cout << bsp(p1, p2, p3, Point(x, y));
		std::cout << "\n";
	}
}
