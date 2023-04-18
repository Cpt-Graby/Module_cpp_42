/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:47:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/18 16:48:57 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	private:
		unsigned int _number_of_contact;
		Contact _book[8];
		void	_add_contact_to_line(int index);
		int		_get_number_of_contact(void) const;

	public:

		PhoneBook( void );
		~PhoneBook( void );
		void add_contact(void);
		void search_contact(void);
	};

#endif
