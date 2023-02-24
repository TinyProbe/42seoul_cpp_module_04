/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:04 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 10:42:22 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("(None)") {
	std::cout << "Animal Default constructor called\n";
}
Animal::Animal(const Animal& rhs) {
	std::cout << "Animal copy constructor called\n";
	*this = rhs;
}
Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}
Animal& Animal::operator=(const Animal& rhs) {
	std::cout << "Animal copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	this->type = rhs.type;
	return *this;
}

const std::string& Animal::getType() const { return this->type; }
void Animal::makeSound() const {
	std::cout << "Can't specify what kind of animal\n";
}
