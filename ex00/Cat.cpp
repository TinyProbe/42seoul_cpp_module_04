/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:07 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 10:44:34 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat Default constructor called\n";
	this->type = "Cat";
}
Cat::Cat(const Cat& rhs) {
	std::cout << "Cat copy constructor called\n";
	*this = rhs;
}
Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}
Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	dynamic_cast<Animal&>(*this) = dynamic_cast<const Animal&>(rhs);
	return *this;
}

void Cat::makeSound() const { std::cout << "Nyaong!\n"; }
