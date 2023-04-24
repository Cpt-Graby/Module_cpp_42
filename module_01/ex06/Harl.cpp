/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:24:58 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 13:41:30 by agonelle         ###   ########.fr       */
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
	int stop(4);
	for (int i = 0; i < 4; i++){
		if (levelStr == level[i])
			stop = i;
	}
	switch (stop)
	{
		case 0:
			for ( int y = 0; y < 4; y++){
				std::cout << "[" << level[y] << "]" << std::endl;
				(this->*tab_fonc[y])();
			}
			break;
		case 1:
			for ( int y = 1; y < 4; y++){
				std::cout << "[" << level[y] << "]" << std::endl;
				(this->*tab_fonc[y])();
			}
			break;
		case 2:
			for ( int y = 2; y < 4; y++){
				std::cout << "[" << level[y] << "]" << std::endl;
				(this->*tab_fonc[y])();
			}
			break;
		case 3:
			for ( int y = 3; y < 4; y++){
				std::cout << "[" << level[y] << "]" << std::endl;
				(this->*tab_fonc[y])();
			}
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
