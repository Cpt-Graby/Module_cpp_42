/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:37:28 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:21:25 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(){
	DiamondTrap first("Alexis");
	std::cout << first;
	first.attack("le vide");
	first.highFivesGuys();
	first.guardGate();
	first.whoAmI();
	std::cout << "----------" << std::endl;
	std::cout << first;
	return (0);
}
