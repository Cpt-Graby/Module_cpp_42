/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:54:37 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/19 12:10:08 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "Contact.class.hpp"

Contact::Contact(void) :
_prenom(""), _nom(""), _nickname(""), _phonenumber(""), _darkestsecret("") {
	return ;
}

Contact::~Contact( void ) {
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

static void get_input(std::string &s_input, std::string s_param) {
	std::cout << "Type " << s_param << ": ";
	while (!s_input.compare(""))
	{
		std::getline(std::cin, s_input);
		if (std::cin.fail())
		{
			std::cout << std::endl;
			std::cout << "Something went wrong!" << std::endl;
			exit(1);
		}
	}
	return ;
}

void Contact::ask_param(void){

	std::string s_prenom("");
	get_input(s_prenom, "first name");
	std::string s_nom("");
	get_input(s_nom, "last name");
	std::string s_nick("");
	get_input(s_nick, "nickname");
	std::string s_phone("");
	get_input(s_phone, "phone number");
	std::string s_dark("");
	get_input(s_dark, "darkest secret");
	this->_set_all_param(s_prenom, s_nom, s_nick, s_phone, s_dark);
	return ;
}

void Contact::print_contact(void) const {
	std::cout << "Prenom        : "<< this->_prenom << std::endl; 
	std::cout << "Nom           : "<< this->_nom << std::endl;
	std::cout << "Nickname      : "<< this->_nickname << std::endl;
	std::cout << "Phone number  : "<< this->_phonenumber << std::endl;
	std::cout << "darkest secret: "<< this->_darkestsecret << std::endl;
	return ;
}

void Contact::copy(const Contact old_contact) {
	this->_set_all_param(old_contact._prenom, old_contact._nom,
			old_contact._nickname, old_contact._phonenumber,
			old_contact._darkestsecret);
	return ;
}

static void print_name_under_10(std::string s_name) {
	if (s_name.length() > 10)
	{
		std::cout << s_name.substr(0, 9);
		std::cout << ".|";
		return ;
	}
	std::cout << std::right << std::setw(10) << s_name;
	std::cout << "|";
	return ;
}

void Contact::print_line_contact(int index) const {
	std::cout << std::right << std::setw(10) << index + 1  << "|";
	print_name_under_10(this->_prenom);
	print_name_under_10(this->_nom);
	print_name_under_10(this->_nickname);
	std::cout << std::endl;
}
