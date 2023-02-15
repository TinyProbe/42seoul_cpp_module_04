/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 01:06:12 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 03:52:42 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;
class ICharacter {

public:
	virtual ~ICharacter() {}
	virtual std::string const& getName() const = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;

};

#endif 
