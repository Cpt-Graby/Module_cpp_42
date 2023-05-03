/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:10:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:49:12 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
	protected:
		ScavTrap(void);
	private:
		int	_gardianMode;
	public: 
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &rhs);
		void	attack(std::string const &target);
		void	guardGate();
		
};

std::ostream &operator<<(std::ostream &o, ScavTrap const &rhs);

#endif 
