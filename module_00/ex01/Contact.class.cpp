/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:54:37 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/18 13:12:49 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) :
_prenom(""), _nom(""), _nickname(""), _phonenumber(""), _darkestsecret("") {
	std::cout << "Le constructeur de contact est la" << std::endl;
	return ;
}

Contact::~Contact( void ) {
	std::cout << "Le destructeur decontact est la" << std::endl;
	return ;
}

void Contact::print_contact(void) const {
	std::cout << this->_prenom << std::endl; 
	std::cout << this->_nom << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phonenumber << std::endl;
	std::cout << this->_darkestsecret << std::endl;
	return ;
}

void Contact::_set_all_param(std::string s_name, std::string s_fname, std::string s_nick,
		std::string s_phone, std::string s_dark) {
	this->_prenom = s_name;
	this->_nom = s_fname;
	this->_nickname = s_nick;
	this->_phonenumber = s_phone;
	this->_darkestsecret = s_dark;
	return ;
}

void Contact::copy(const Contact old_contact) {
	this->_set_all_param(old_contact._prenom, old_contact._nom,
			old_contact._nickname, old_contact._phonenumber,
			old_contact._darkestsecret);
	return ;
}
