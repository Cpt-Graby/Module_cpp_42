/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:52:16 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/18 13:10:43 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook created" << std::endl;
	this->_number_of_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::_add_contact_to_line(int index){
	//TODO Ecrire les proprietes pour les ecrire dans une fonction.
}

int		PhoneBook::_get_number_of_contact(void) const{
	return (this->_number_of_contact);
}

void PhoneBook::search_contact(void){
	if (this->_number_of_contact == 0)
	{
		std::cout << "No contact added" << std::endl;
		return ;
	}
}

void PhoneBook::add_contact(void) {
	int tmp;

	tmp = this->_get_number_of_contact();
	if (tmp != 0)
	{
		for (int i = tmp; i < 0; i--) {
			this->_book[i].copy(this->_book[i - 1]);
		}
	}
	this->_add_contact_to_line(0);
	//Fonction pour augmenter les nombres de contactes
	return ;
}
