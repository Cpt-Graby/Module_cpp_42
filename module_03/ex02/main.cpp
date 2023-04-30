/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/30 02:29:38 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(){
	FragTrap First("Alexis");
	// Test du nombre de HP
	for (int i = 98; i > 0; i--) { 
		First.takeDamage(10);
	}
	for (int i = 25; i > 0; i--) { 
		First.attack("Le vide");
	}
	for (int i = 26; i > 0; i--) { 
		First.beRepaired(1);
	}
	std::cout << "----------" << std::endl;
	return (0);
}

	/*
	// Test de la creation. 
	ClapTrap First("Alexis");
	for (int i = 2; i > 0; i--) { 
		First.attack("Le vide");
	}
	

	std::cout << "----------" << std::endl;
	ClapTrap Second("Julien");
	for (int i = 12; i > 0; i--) { 
		Second.attack("Le vide");
	}
	*/
