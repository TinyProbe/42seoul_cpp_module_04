/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:48:26 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 04:30:03 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define MAX_SLOT 4

class Character : public ICharacter {
	AMateria* slot[MAX_SLOT];
	std::string name;

public:
	Character();
	Character(const Character& rhs);
	Character(const std::string& name);
	~Character();
	Character& operator=(const Character& rhs);

	AMateria* getMateria(int idx) const;
	std::string const& getName() const;
	void use(int idx, ICharacter& target);
	void equip(AMateria* m);
	void unequip(int idx);

};

#endif 
