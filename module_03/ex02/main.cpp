/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:20:29 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(){
	FragTrap First("Alexis");
	// Test du nombre de HP
	std::cout << First;
	for (int i = 15; i > 0; i--) { 
		First.takeDamage(10);
	}
	for (int i = 25; i > 0; i--) { 
		First.attack("Le vide");
	}
	for (int i = 26; i > 0; i--) { 
		First.beRepaired(1);
	}
	std::cout << First;
	std::cout << "----------" << std::endl;
	return (0);
}
