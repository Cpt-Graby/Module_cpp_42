/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/27 16:51:55 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){
	// Test de la creation. 
	ClapTrap First("Alexis");
	// Test du nombre de HP
	for (int i = 12; i > 0; i--) { 
		First.takeDamage(1);
	}

	std::cout << "----------" << std::endl;
	for (int i = 2; i > 0; i--) { 
		First.attack("Le vide");
	}
	

	std::cout << "----------" << std::endl;
	ClapTrap Second("Julien");
	for (int i = 12; i > 0; i--) { 
		Second.attack("Le vide");
	}
	return (0);
}
