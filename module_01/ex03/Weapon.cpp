/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:10:04 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 15:30:15 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string init) : type(init) {
	return ;
}

Weapon::~Weapon(void){
	return ;
}

const std::string& Weapon::getType(void){
	std::string& ref = this->type;
	return (ref);
}

void Weapon::setType(std::string type){
	this->type = type;
	return ;
}
