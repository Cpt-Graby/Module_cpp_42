/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:52:35 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 08:05:09 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string const & init): _name(init), _weapon(nullptr){
	return;
}

HumanB::~HumanB(void){
	return ;
}

void HumanB::attack(void) const {
	std::cout << this->_name << "attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &arme) {
	this->_weapon = &arme;
	return ;
}
