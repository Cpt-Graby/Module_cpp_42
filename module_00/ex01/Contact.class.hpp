/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:32:18 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/25 15:07:34 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONCTACT_CLASS_HPP
# define CONCTACT_CLASS_HPP

#include <iostream>

class Contact {
	private:

		std::string _prenom;
		std::string _nom;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
		void _set_all_param(std::string s_name, std::string s_nom,
				std::string s_nick, std::string s_phone, std::string s_dark);

	public:
		Contact( void );
		~Contact( void );
		void copy(const Contact old_contact);
		void ask_param(void);
		void print_contact (void) const;
		void print_line_contact (int index) const;
};

#endif
