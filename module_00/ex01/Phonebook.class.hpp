/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:47:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/17 18:25:19 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	private:
		unsigned int number_contact;
		void _add_contact(void);
		void _search_contact(void);
		Contact _book[8];

	public:

		PhoneBook( void );
		~PhoneBook( void );
	};

#endif
