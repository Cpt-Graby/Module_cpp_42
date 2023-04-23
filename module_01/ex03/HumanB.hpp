/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:21:17 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/20 15:58:21 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINA_HPP
# define HUMAINA_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void) const;
};

#endif

