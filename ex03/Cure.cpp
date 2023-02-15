/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:37:01 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 05:13:34 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& rhs) : AMateria("cure") {
	*this = rhs;
}
Cure::Cure(std::string const& type) : AMateria(type) {}
Cure::~Cure() {}
Cure& Cure::operator=(const Cure& rhs) {
	if (this == &rhs) {
		return *this;
	}
	return *this;
}

Cure* Cure::clone() const {
	return new Cure(*this);
}
void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
