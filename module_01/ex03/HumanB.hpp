/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:21:17 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 06:38:35 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void) const;
		void setWeapon(Weapon arme);
};

#endif

