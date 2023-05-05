/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:33:45 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/05 10:33:47 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : type(type) {
	std::cout << "AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal & src) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal & AAnimal::operator=(const AAnimal & rhs) {
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

void AAnimal::makeSound(void) const {
	std::cout << "Is it a dog or a cat?" << std::endl;
	return ;
}

std::string AAnimal::getType(void) const {
	return (this->type);
}

std::ostream & operator<<(std::ostream & o, const AAnimal & rhs) {
	o << rhs.getType();
	return (o);
}
