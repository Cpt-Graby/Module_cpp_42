/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:35 by agonelle          #+#    #+#             */
/*   Updated: 2023/04/14 15:03:20 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	noise(void);
void	word_to_up(char *str);

int main (int argc, char **argv) {
	int i;

	i = 1;
	if (argc == 1)
		noise();
	else
	{
		while (argv[i])
		{
			word_to_up(argv[i]);
			i++;
		}
	}
	return (0);
}

void	word_to_up(char *str){
	for (int y = 0; str[y]; y++){
		std::cout << (char)toupper(str[y]);
	}
}

void noise(){
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
