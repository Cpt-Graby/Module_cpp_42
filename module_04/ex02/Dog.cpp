/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:11:13 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 09:23:16 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src): Animal(src){
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
	return ;
}

Dog & Dog::operator=(Dog const & rhs){
	if (this != &rhs) {
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

void Dog::makeSound(void) const{
	std::cout << "Wouf Wouf" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Dog const & rhs) {
	o << rhs.getType() << std::endl;
	return (o);
}
