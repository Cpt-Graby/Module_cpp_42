/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:50:19 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 10:36:46 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *Carl = newZombie("Zom-Bill"); 
	Carl->announce();
	randomChump("Zom-Bob");
	delete Carl;
	return (0);
}
