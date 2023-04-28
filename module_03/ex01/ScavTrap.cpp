/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:34:27 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/28 15:25:54 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	ClapTrap::ClapTrap(name);
	return ;
}

ScavTrap::~ScavTrap(void) {
	return ;
}
