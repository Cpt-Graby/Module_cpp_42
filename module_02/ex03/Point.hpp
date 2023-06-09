/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:19:39 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/28 09:39:16 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point(void);
		Point(float a, float b);
		Point(Point const &old_point);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;

		Point &operator=(Point const &rhs);
};
#endif
