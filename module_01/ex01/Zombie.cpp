/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:19:41 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 11:11:10 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	return;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is dead." << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
	return;
}

void	Zombie::setName(std::string name) {
	this->_setName(name);	
	return;
}

void	Zombie::_setName(std::string name) {
	this->_name = name;
	return;
}
