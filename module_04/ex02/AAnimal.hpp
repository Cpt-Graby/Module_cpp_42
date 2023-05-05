/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:53:24 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/05 10:26:39 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal {
	protected:
		AAnimal(void);
		std::string type;
	public:
		AAnimal(std::string type);
		AAnimal(const AAnimal & src);

		AAnimal & operator=(const AAnimal & rhs);
		virtual ~AAnimal(void);
		std::string getType() const;
		virtual void makeSound(void) const = 0;
};

std::ostream & operator<<(std::ostream & o, const AAnimal & rhs);

#endif
