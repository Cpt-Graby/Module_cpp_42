/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:18:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/05 10:34:52 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	/*
	const AAnimal *meta = new AAnimal();
	meta->makeSound();
	delete meta;
	*/
	const AAnimal *i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	delete i;
	const AAnimal *j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); 
	delete j;
	return (0);
}
