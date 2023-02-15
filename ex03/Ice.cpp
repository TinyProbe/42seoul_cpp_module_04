/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:36:59 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 05:13:58 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& rhs) : AMateria("ice") {
	*this = rhs;
}
Ice::Ice(std::string const& type) : AMateria(type) {}
Ice::~Ice() {}
Ice& Ice::operator=(const Ice& rhs) {
	if (this == &rhs) {
		return *this;
	}
	return *this;
}

Ice* Ice::clone() const {
	return new Ice(*this);
}
void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
