/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:16:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 01:10:32 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal & Animal::operator=(const Animal & rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void Animal::makeSound(void) const {
	std::cout << "Is it a dog or a cat?" << std::endl;
	return ;
}

std::string Animal::getType(void) const {
	return (this->type);
}

std::ostream & operator<<(std::ostream & o, const Animal & rhs) {
	o << rhs.getType();
	return (o);
}
