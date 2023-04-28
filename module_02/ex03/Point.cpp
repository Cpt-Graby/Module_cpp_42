/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:22:18 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/28 09:40:32 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0){
	return ;
}

Point::Point(float a, float b): _x(a), _y(b){
	return ;
}

Point::Point(Point const &old_point) : _x(old_point._x) , _y(old_point._y){
	return ;
}

Point::~Point(void) {
	return ;
}

Fixed Point::getX(void) const{
	return this->_x;
}

Fixed Point::getY(void) const{
	return this->_y;
}

Point & Point::operator=(Point const &rhs){
	this->_x = rhs._x;
	this->_y = rhs._y;
	return *this;
}

