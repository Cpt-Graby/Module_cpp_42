/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:24:58 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 13:22:31 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void) {
	level[0]="DEBUG";
	level[1]="INFO";
	level[2]="WARNING";
	level[3]="ERROR";
	tab_fonc[0] = &Harl::debug;
	tab_fonc[1] = &Harl::info;
	tab_fonc[2] = &Harl::warning;
	tab_fonc[3] = &Harl::error;
	return ;
}

Harl::~Harl(void) {
	return ;
}

void Harl::debug(void) {
	std::cout << "C'est un bug" << std::endl;
	return ;
}

void Harl::info(void) {
	std::cout << "C est une info" << std::endl;
	return ;
}

void Harl::warning(void) {
	std::cout << "C'est un avertissement" << std::endl;
	return ;
}

void Harl::error(void) {
	std::cout << "C'est une erreur" << std::endl;
	return ;
}

void Harl::complain(std::string levelStr){
	for (int i = 0; i < 4; i++){
		if (levelStr == level[i])
		{
			(this->*tab_fonc[i])();
			break;
		}
		if (i == 3)
			std::cout << "Not a valid level" << std::endl;
	}
	return ;
}
