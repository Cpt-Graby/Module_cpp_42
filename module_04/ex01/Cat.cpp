/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:14:10 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/01 12:27:36 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const {
	std::cout << "Miaw Miaw" << std::endl;
	return ;
}
