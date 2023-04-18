/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:47:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/18 09:59:24 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	private:
		unsigned int number_contact;
		Contact _book[8];
		void	_add_contact_to_line(int index);
		void	_get_number_contact(void);

	public:

		PhoneBook( void );
		~PhoneBook( void );
		void add_contact(void);
		void search_contact(void);
	};

#endif
