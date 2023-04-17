/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:22:31 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/17 18:21:27 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int main (void)
{
	PhoneBook phonebook;
	std::string cmd_input("");
	while (cmd_input.compare("EXIT"))
	{
		std::cout << "Phonebook: ";
		std::getline(std::cin, cmd_input);
		if (!cmd_input.compare("ADD"))
			phonebook.add_contact();
		if (!cmd_input.compare("SEARCH"))
			phonebook.search_contact();
	}
	std::cout << "Your are out " << std::endl;
	return (0);
}
