/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:03:03 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/01 11:37:47 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		virtual ~Animal(void);
		std::string getType() const;
		virtual void makeSound(void) const;
};

#endif
