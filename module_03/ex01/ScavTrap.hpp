/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:10:14 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/28 15:28:58 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		ScavTrap(void);
	public: 
		ScavTrap(std::string name): ClapTrap(std::string name) {}
		~ScavTrap(void);
		void	attack(std::string const &target);
		void	guardGate();
		
};

#endif 
