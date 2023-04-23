/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:56:06 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 14:48:45 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Voici l'adresse de str: " << &stringPTR << std::endl;
	std::cout << "Adresse dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse dans stringREF: " << &stringREF << std::endl; 
	std::cout << "Puis" << std::endl;
	std::cout << "Voici le contenu de str: " << str << std::endl;
	std::cout << "Contenu dans stringPTR: " << *stringPTR << std::endl;
	std::cout << "Contenu dans stringREF: " << stringREF << std::endl;
	return (0);
}
