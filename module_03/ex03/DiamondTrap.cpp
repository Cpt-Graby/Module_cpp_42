/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:10:46 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:18 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), _name(name) {
	std::cout << "DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) :FragTrap(src), ScavTrap(src) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap destructor called for " << _name << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src) {
	if (this != &src) {
		this->_name = src._name;
		this->FragTrap::_hitPts = src.FragTrap::_hitPts;
		this->ScavTrap::_energyPts = src.ScavTrap::_energyPts;
		this->FragTrap::_attackDmg = src.FragTrap::_attackDmg;
	}
	std::cout << "DiamondTrap operator= called, ";
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ScavTrap name: " << ScavTrap::_name << std::endl;
	std::cout << "FragTrap name: " << FragTrap::_name << std::endl;
	return ;
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
	return ;
}

std::ostream & operator<<(std::ostream & o, DiamondTrap const & rhs) {
	o << rhs.FragTrap::get_name() << " with " << rhs.FragTrap::get_HP() << " HP and " << rhs.ScavTrap::get_energy() << " energy points." << std::endl; 
	return (o);
}
