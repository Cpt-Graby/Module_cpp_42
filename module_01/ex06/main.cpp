/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:58:31 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 13:22:41 by agonelle         ###   ########.fr       */
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
	else 
		std::cout << "Use " << argv[0] << "[level between 0 and 3]" << std::endl;
	return (0);

}
