/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:33:15 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/27 10:31:10 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int _rawBits;
		static const int _fractionBits = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const r);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
