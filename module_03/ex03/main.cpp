/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 12:23:55 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(){
	DiamondTrap first("Alexis");
	first.attack("le vide");
	first.highFivesGuys();
	first.guardGate();
	first.whoAmI();
	std::cout << first;
	std::cout << "----------" << std::endl;
	return (0);
}
