/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:14:05 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 00:56:30 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) { 
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDmg = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPts = rhs._hitPts;
		this->_energyPts = rhs._energyPts;
		this->_attackDmg = rhs._attackDmg;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for high fives" << std::endl;
	return ;
}

void FragTrap::attack(std::string const & target)
{
	if (this->_check_activ())
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_attackDmg;
		std::cout << " points of damage." << std::endl;
		this->_useEnergy();
	}
	else
	{
		std::cout << "For some misterious reasons " << this->_name;
		std::cout << " can't move." << std::endl;
	}
	return ;
}

std::ostream & operator<<(std::ostream & o, FragTrap const & rhs) {
	o << rhs.get_name()<< " with " << rhs.get_HP() << " HP and " << rhs.get_energy() << " energy points." << std::endl; 
	return (o);
}
