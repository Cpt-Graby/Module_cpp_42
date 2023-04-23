/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:49:25 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 11:41:00 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie* zombies = new Zombie[N];
	std::stringstream ss;
	for (int i = 0; i < N; i++) {
		ss.str("");
		ss << name << i + 1;
		zombies[i].setName(ss.str());
	}
	return (zombies);
}
