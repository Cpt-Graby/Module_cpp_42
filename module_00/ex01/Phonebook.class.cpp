/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:52:16 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/18 10:00:39 by agonelle         ###   ########.fr       */
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


void PhoneBook::add_contact(void) {

}

void	PhoneBook::_add_contact_to_line(int index){
}

void	PhoneBook::_get_number_contact(void){
	return (this->number_contact);
}
void PhoneBook::search_contact(void){
	if (this->number_contact == 0)
		std::cout << "No contact added" << std::endl;
}
