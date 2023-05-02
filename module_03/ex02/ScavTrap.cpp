/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:34:27 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 00:51:51 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _gardianMode(0){
	std::cout << "ScavTrap constructor called for:" << this->_name << std::endl;
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDmg = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called for:" << this->_name << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called for:" << this->_name << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap assignation operator called for:" << this->_name << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPts = rhs._hitPts;
		this->_energyPts = rhs._energyPts;
		this->_attackDmg = rhs._attackDmg;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	if (this->_check_activ()) {
		std::cout << "ScavTrap " << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attackDmg << " points of damage!";
		std::cout << std::endl;
		this->_useEnergy();
	}
	else {
		std::cout << "ScavTrap " << this->_name << " can't move." << std::endl;
	}
	return ;
}

void ScavTrap::guardGate() {
	if (this->_gardianMode == 1) {
		std::cout << "ScavTrap " << this->_name;
		std::cout << " have exit Gate keeper mode." << std::endl;
		this->_gardianMode = 0;
	}
	else {
		std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
		this->_gardianMode = 1;
	}
	return ;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & rhs) {
	o << rhs.get_name()<< " with " << rhs.get_HP() << " HP and " << rhs.get_energy() << " energy points." << std::endl; 
	return (o);
}
