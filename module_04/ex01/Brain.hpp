/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:29 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/14 11:51:54 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain &operator=(Brain const & rhs);
		std::string getIdea(int i) const;
		void setIdea(int i, std::string const idea);

};

std::ostream &operator<<(std::ostream &o, Brain const & rhs);

#endif
