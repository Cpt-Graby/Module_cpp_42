/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:11:13 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 00:19:24 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src): Animal(src){
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog & Dog::operator=(Dog const & rhs){
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const{
	std::cout << "Wouf Wouf" << std::endl;
	return ;
}
