/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonelle <agonelle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:18:33 by agonelle          #+#    #+#             */
/*   Updated: 2023/05/03 09:57:28 by agonelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal* meta[10];
	for (int i=0; i<5; i++){
		meta[i] = new Dog();
		std::cout << "-----" << std::endl;
	}
	for (int i=5; i<10; i++){
		meta[i] = new Cat();
		std::cout << "-----" << std::endl;
	}
	for (int i = 0; i < 10; i++){
		std::cout << "Animal " << i << " : ";
		meta[i]->makeSound();
	}
	for (int i = 0; i < 10; i++){
		delete meta[i];
		std::cout << "-----" << std::endl;
	}
	return (0);
}
