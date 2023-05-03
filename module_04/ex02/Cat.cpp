/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:14:10 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 09:20:59 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs) {
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miaw Miaw" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Cat const & rhs) {
	o << rhs.getType() << std::endl;
	return (o);
}
