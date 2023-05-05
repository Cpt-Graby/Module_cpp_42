/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:07:45 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/05 10:28:46 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		void makeSound(void) const;
		Cat & operator=(Cat const & rhs);
};

std::ostream & operator<<(std::ostream & o, const Cat & rhs);

#endif
