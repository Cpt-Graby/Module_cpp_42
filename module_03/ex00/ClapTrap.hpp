/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:19:29 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 00:45:31 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap { 
	private:
		ClapTrap(void);
		std::string _name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDmg;
		bool _check_activ(void);
		void	_useEnergy(void);
	public:
		ClapTrap (std::string name);
		ClapTrap (ClapTrap const & rhs);
		~ClapTrap(void);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	get_name(void) const;
		unsigned int get_HP(void) const;
		unsigned int get_energy(void) const;

		ClapTrap & operator=(ClapTrap const & rhs);

};
std::ostream & operator<<(std::ostream & o, ClapTrap const & rhs);
#endif
