/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:06:05 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 11:10:07 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria() : type("(None)") {}
AMateria::AMateria(const AMateria& rhs) { *this = rhs; }
AMateria::AMateria(std::string const& type) : type(type) {}
AMateria::~AMateria() {}
AMateria& AMateria::operator=(const AMateria& rhs) {
	if (this == &rhs) {
		return *this;
	}
	return *this;
}

std::string const& AMateria::getType() const { return this->type; }
void AMateria::use(ICharacter& target) {
	std::cout << "AMateria : " << target.getName() << '\n';
}
