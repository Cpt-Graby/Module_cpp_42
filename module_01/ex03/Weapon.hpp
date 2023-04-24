/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:58:55 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 08:02:26 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string const &init);
		~Weapon(void);
		std::string const & getType(void) const;
		void setType(std::string type);
};

#endif
