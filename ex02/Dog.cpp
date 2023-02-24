/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:05 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 10:54:41 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal(),
	brain(new Brain())
{
	std::cout << "Dog Default constructor called\n";
	this->type = "Dog";
}
Dog::Dog(const Dog& rhs) : brain(new Brain()) {
	std::cout << "Dog copy constructor called\n";
	*this = rhs;
}
Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete this->brain;
}
Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	this->type = rhs.type;
	*(this->brain) = *(rhs.brain);
	return *this;
}

void Dog::makeSound() const { std::cout << "Mung!\n"; }
void Dog::show() const {
	for (int i = 0; i < std::min(MAX_IDEA, this->brain->getSize()) - 1; ++i) {
		std::cout << this->brain->getIdea()[i] << ", ";
	}
	if (this->brain->getSize()) {
		std::cout << this->brain->getIdea()[std::min(MAX_IDEA, this->brain->getSize()) - 1]
			<< (this->brain->getSize() ? "\n" : "");
	}
}
void Dog::think(const std::string& idea) {
	this->brain->setIdea(idea, this->brain->getSize());
	this->brain->setSize(this->brain->getSize() + 1);
}
