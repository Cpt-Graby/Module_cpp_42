/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:50:19 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 11:42:16 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int N = 10;
	Zombie* zombies = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
