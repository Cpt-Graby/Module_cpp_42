/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:47:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 01:12:32 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

void WrongCat::makeSound(void) const {
	std::cout << "Miaw Miaw" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const WrongCat & rhs) {
	o << rhs.getType();
	return (o);
}
