/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:05 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 02:15:19 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal()
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
}
Dog::Dog(const Dog& rhs) :
	Animal(rhs)
{
	std::cout << "Dog copy constructor called\n";
}
Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}
Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Mung!\n";
}
