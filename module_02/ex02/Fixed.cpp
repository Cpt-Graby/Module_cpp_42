/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:36:49 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/27 11:59:26 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called " << std::endl;
	return ;
}

Fixed::Fixed(int const n): _rawBits(n << this->_fractionBits) {
	std::cout << "Int constructor called " << std::endl;
	return ;
}

Fixed::Fixed(float const r) :_rawBits(roundf(r * (1 << this->_fractionBits))) {
	std::cout << "Float constructor called " << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called " << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

int Fixed::toInt(void) const {
	return (this->_rawBits >> this->_fractionBits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (float)(1 << this->_fractionBits));
}

/* Comparasion operator */

bool Fixed::operator>(Fixed const &rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

/* Basics operations */

Fixed Fixed::operator+(Fixed const &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*Post fixe operator and prefix operator */

Fixed &Fixed::operator++(void) {
	++(this->_rawBits);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed cpy(*this);
	++(*this);
	return (cpy);
}

Fixed &Fixed::operator--(void) {
	--(this->_rawBits);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed cpy(*this);
	--(*this);
	return (cpy);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
