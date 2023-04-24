/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:10:04 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 06:49:46 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string const & init) : type(init) {
	return ;
}

Weapon::~Weapon(void){
	return ;
}

std::string const & Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
	return ;
}
