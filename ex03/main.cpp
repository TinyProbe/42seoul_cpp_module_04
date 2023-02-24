/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:39:13 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 11:23:29 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void leaks() {
	system("leaks program");
}

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	ICharacter* me2 = new Character(dynamic_cast<Character&>(*me));
	tmp = dynamic_cast<Character&>(*me).getMateria(0);
	me->unequip(0);
	if (tmp) {
		delete tmp;
	}
	tmp = dynamic_cast<Character&>(*me).getMateria(1);
	me->unequip(1);
	if (tmp) {
		delete tmp;
	}
	me->use(0, *bob);

	for (int i = 0; i < MAX_SLOT; ++i) {
		me2->use(i, *bob);
	}

	delete me2;
	delete bob;
	delete me;
	delete src;
	atexit(leaks);
}
