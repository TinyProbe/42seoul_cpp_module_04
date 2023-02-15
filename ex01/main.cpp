/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:13:41 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 22:28:24 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks() {
	system("leaks program");
}

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete i;
	delete j;
	Dog a, b;
	a.think("meal");
	a.show();
	b.show();
	a.think("play");
	a.think("sleep");
	a.show();
	b.show();
	b = a;
	b.think("swim");
	b.think("cake");
	b.think("robot");
	a.show();
	b.show();
	b = a;
	a.show();
	b.show();
	atexit(leaks);
}
