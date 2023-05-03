/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:03:03 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 10:26:33 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string type;
		Animal(void);
	public:
		Animal(std::string type);
		Animal(const Animal & src);

		Animal & operator=(const Animal & rhs);
		virtual ~Animal(void);
		std::string getType() const;
		virtual void makeSound(void) const;
};

std::ostream & operator<<(std::ostream & o, const Animal & rhs);

#endif
