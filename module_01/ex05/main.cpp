/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:58:31 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 13:46:03 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl newHarl;
	if (argc == 2)
	{
		newHarl.complain(argv[1]);
	}
	else if (argc >= 3)
	{
		std::cout << "Use " << argv[0] << "[level between 0 and 3]" << std::endl;
	}
	else
	{
		newHarl.complain("DEBUG");
		newHarl.complain("WARNING");
		newHarl.complain("ERROR");
		newHarl.complain("INFO");

	}
	return (0);

}
