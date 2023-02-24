/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:49:37 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 11:13:55 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < MAX_SLOT; ++i) {
		this->slot[i] = nullptr;
	}
}
MateriaSource::MateriaSource(const MateriaSource& rhs) { *this = rhs; }
MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i]) {
			delete this->slot[i];
		}
	}
}
MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	if (this == &rhs) {
		return *this;
	}
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i]) {
			delete this->slot[i];
		}
		if (rhs.slot[i]) {
			this->slot[i] = rhs.slot[i]->clone();
		} else {
			this->slot[i] = nullptr;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i] == nullptr) {
			this->slot[i] = m;
			return;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i] && this->slot[i]->getType() == type) {
			return this->slot[i]->clone();
		}
	}
	return nullptr;
}
