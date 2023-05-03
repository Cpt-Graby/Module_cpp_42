/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:45:05 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 01:09:32 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
		void makeSound(void) const;

		WrongCat &operator=(WrongCat const &rhs);
};

std::ostream & operator<<(std::ostream & o, const WrongCat & rhs);
#endif
