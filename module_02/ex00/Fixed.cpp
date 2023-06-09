/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:36:49 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/26 12:58:42 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called " << std::endl;
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
