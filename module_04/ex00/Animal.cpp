/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:16:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/01 11:31:58 by agonelle         ###   ########.fr       */
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
