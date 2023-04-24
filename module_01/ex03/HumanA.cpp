/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:52:35 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 06:54:01 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string init): name(init), &_weapon("fist") {
	return;
}

HumanA::~HumanA(void){
	return ;
}

void HumanA::attack(void) const {
	std::cout << this->name << "attacks with their";
	std::cout << this->_weapon.getType() << std::endl;
	return ;
}
