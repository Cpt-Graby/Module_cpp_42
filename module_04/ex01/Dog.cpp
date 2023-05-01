/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:11:13 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/01 12:27:19 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog::~Dog(void){
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const{
	std::cout << "Wouf Wouf" << std::endl;
	return ;
}
