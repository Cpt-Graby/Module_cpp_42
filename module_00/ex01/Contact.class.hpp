/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:32:18 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/17 18:16:31 by agonelle         ###   ########.fr       */
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
		void _print_contact (void) const;

	public:
		Contact( void );
		~Contact( void );
		int	compare(std::string name, std::string fname);
};

#endif
