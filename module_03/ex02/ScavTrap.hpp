/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:10:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/29 16:13:35 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	private:
		ScavTrap(void);
		int	_gardianMode;
	public: 
		ScavTrap(std::string name);
		~ScavTrap(void);
		void	attack(std::string const &target);
		void	guardGate();
		
};

#endif 
