/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:40:09 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/02 13:42:02 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void){
	return ; 
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(10), _energyPts (10),
_attackDmg(0) {
	std::cout << "Creation of ClapTrap: " << this->_name << std::endl;
	return ; 
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destruction of ClapTrap: " << this->_name << std::endl;
	return ; 
}

bool ClapTrap::_check_activ(void) {
	return ((this->_energyPts > 0) && (this->_hitPts > 0));
}

void ClapTrap::_useEnergy(void){
	 this->_energyPts--;
	 return ;
}

void ClapTrap::attack(std::string const &target){
	if (this->_check_activ())
	{
		std::cout << "Claptrap " << this->_name;
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

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPts == 0)
	{
		std::cout << this->_name << " has 0 hit points." << std::endl;
		return ;
	}
	if (amount >= this->_hitPts)
	{
		std::cout << this->_name << " took " << this->_hitPts;
		this->_hitPts = 0;
		std::cout << " damages." << std::endl;
	}
	else
	{
		std::cout << this->_name << " took " << amount;
		std::cout << " damages." << std::endl;
		this->_hitPts -= amount;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_check_activ())
	{
		std::cout << "Claptrap " << this->_name;
		std::cout << " repaire of  " << amount << "." << std::endl;
		this->_useEnergy();
	}
	else
	{
		std::cout << "For some misterious reasons " << this->_name;
		std::cout << " can't move." << std::endl;
	}
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src) {
	this->_name = src._name;
	this->_hitPts = src._hitPts;
	this->_energyPts = src._energyPts;
	this->_attackDmg = src._attackDmg;
	return (*this);
};
