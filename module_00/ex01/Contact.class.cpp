/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:54:37 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/17 18:19:26 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Le constructeur de contact est la" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	std::cout << "Le destructeur decontact est la" << std::endl;
	return ;
}

void Contact::_print_contact(void) const {
	std::cout << this->_prenom << " " << this->_nom << " ";
	std::cout << this->_phonenumber << " " << this->_darkestsecret;
	std::cout << std::endl;
	return ;
}

int Contact::compare(std::string name, std::string fname) {

	(void) name;
	(void) fname;
	return (0);
}
