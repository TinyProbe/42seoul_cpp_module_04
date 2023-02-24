/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:48:27 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 10:57:23 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character() : name() {
	for (int i = 0; i < MAX_SLOT; ++i) {
		this->slot[i] = nullptr;
	}
}
Character::Character(const Character& rhs) { *this = rhs; }
Character::Character(const std::string& name) : name(name) {
	for (int i = 0; i < MAX_SLOT; ++i) {
		this->slot[i] = nullptr;
	}
}
Character::~Character() {
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i]) {
			delete this->slot[i];
		}
	}
}
Character& Character::operator=(const Character& rhs) {
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
	this->name = rhs.name;
	return *this;
}

std::string const& Character::getName() const { return this->name; }
AMateria* Character::getMateria(int idx) const {
	return (idx < 0 || idx >= MAX_SLOT ? nullptr : this->slot[idx]);
}
void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < MAX_SLOT) {
		if (this->slot[idx]) {
			this->slot[idx]->use(target);
		} else {
			std::cout << "There is an empty slot\n";
		}
	}
}
void Character::equip(AMateria* m) {
	for (int i = 0; i < MAX_SLOT; ++i) {
		if (this->slot[i] == nullptr) {
			this->slot[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx) {
	if (idx >= 0 && idx < MAX_SLOT) {
		this->slot[idx] = nullptr;
	}
}
