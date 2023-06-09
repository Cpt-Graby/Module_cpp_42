/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:10:36 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 14:49:37 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	protected:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

		void	attack(std::string const &target);
		void highFivesGuys(void);

};
std::ostream &operator<<(std::ostream &o, FragTrap const &rhs);
#endif
