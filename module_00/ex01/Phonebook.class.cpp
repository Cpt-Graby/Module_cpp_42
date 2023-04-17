/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:52:16 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/17 18:45:34 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook created" << std::endl;
	this->number_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}


void PhoneBook::_add_contact(void) {
	std::cout << "Adding a new contact." << std::endl;

	std::string name("");
	std::cout << "Please give the name:";
	std::getline(std::cin, name);
	std::cout << std::endl;

	std::string f_name("");
	std::cout << "Please give the Familly name:";
	std::getline(std::cin, f_name);
	std::cout << std::endl;
	
	std::string number("");
	std::cout << "Please give the number:";
	std::getline(std::cin, number);
	std::cout << std::endl;

	std::string darkest_secret("");
	std::cout << "Please give the darkest secret:";
	std::getline(std::cin, darkest_secret);
	std::cout << std::endl;
}

void PhoneBook::_search_contact(void){
	if (this->number_contact == 0)
		std::cout << "No contact added" << std::endl;
}
