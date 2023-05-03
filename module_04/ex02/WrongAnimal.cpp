/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:16:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 01:10:53 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << "Basic Wronganimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "Wronganimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
	this->type = src.type;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Is it a dog or a cat?" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}

std::ostream &operator<<(std::ostream &o, WrongAnimal const &rhs) {
	o << rhs.getType();
	return (o);
}
