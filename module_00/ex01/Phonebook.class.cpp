/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:52:16 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/19 12:15:23 by agonelle         ###   ########.fr       */
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
	this->_book[index].ask_param();
	if (this->_number_of_contact < 7)
		this->_number_of_contact++;
	return ;
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
	else
	{
		for (unsigned int i = 0; i <= this->_number_of_contact; i++)
		{
			this->_book[i].print_line_contact(i);
		}
		std::string index("");
		while (index.length() != 1 || index[0] < '1' || index[0] > '8')
		{
			std::cout << "Enter the index of the contact you want to see: ";
			std::getline(std::cin, index);
		}
		this->_book[index[0] - '1'].print_contact();
	}
}

void PhoneBook::add_contact(void) {
	int tmp;

	tmp = this->_get_number_of_contact();
	if (tmp != 0)
	{
		for (int i = tmp; i > 0; i--) {
			this->_book[i].copy(this->_book[i - 1]);
		}
	}
	this->_add_contact_to_line(0);
	return ;
}
