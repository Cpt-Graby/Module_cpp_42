/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:21:17 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 07:43:01 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINA_HPP
# define HUMAINA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon	& _weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void) const;
};

#endif

