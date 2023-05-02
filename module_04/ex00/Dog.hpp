/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:06:17 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 01:07:54 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		void makeSound(void) const;
		Dog & operator=(Dog const & rhs);
};

std::ostream & operator<<(std::ostream & o, const Dog & rhs);

#endif
