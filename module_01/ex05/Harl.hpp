/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:00:36 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/24 12:06:59 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	private:
		void debug (void);
		void info (void);
		void warning (void);
		void error (void);
		void (Harl::*tab_fonc[4])(void);
		std::string level[4];

	public:
		Harl(void);
		~Harl(void);
		void complain (std::string levelStr);

};

#endif
