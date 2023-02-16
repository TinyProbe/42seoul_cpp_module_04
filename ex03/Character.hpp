/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:48:26 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:50:20 by tkong            ###   ########.fr       */
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
	virtual ~Character();
	virtual Character& operator=(const Character& rhs);

	virtual AMateria* getMateria(int idx) const;
	virtual std::string const& getName() const;
	virtual void use(int idx, ICharacter& target);
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);

};

#endif 
