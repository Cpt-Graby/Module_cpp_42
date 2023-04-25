/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:33:15 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/25 16:26:28 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _rawBits;
		static const int _fraction = 8;

};

#endif
