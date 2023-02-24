/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:37:00 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 11:13:03 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	Cure(const Cure& rhs);
	Cure(std::string const& type);
	virtual ~Cure();
	virtual Cure& operator=(const Cure& rhs);

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);

};

#endif
