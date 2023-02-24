/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:13:41 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 08:49:48 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << meta->getType() << " " << std::endl;
	const_cast<Animal&>(*meta) = dynamic_cast<const Animal&>(*j);
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
}
