/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:54:05 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/14 11:51:49 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "";
	}
	return ;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i].append(src.getIdea(i));
	}
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

std::string Brain::getIdea(int i) const {
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string const idea) {
	this->ideas[i] = idea;
}

Brain &Brain::operator=(Brain const & rhs) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = rhs.getIdea(i);
		}
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Brain const & rhs) {
	o << "Brain content: " << std::endl;
	for (int i = 0; i < 100; i++) {
		o << rhs.getIdea(i) << std::endl;
	}
	return o;
}
