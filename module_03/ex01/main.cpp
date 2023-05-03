/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:18:47 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(){

	ScavTrap First("Alexis");
	ScavTrap Second(First);
	// Test du nombre de HP
	for (int i = 8; i > 0; i--) { 
		Second.takeDamage(10);
	}
	for (int i = 25; i > 0; i--) { 
		Second.attack("Le vide");
	}
	for (int i = 26; i > 0; i--) { 
		Second.beRepaired(1);
	}
	std::cout << Second;
	std::cout << "----------" << std::endl;
	return (0);
}
