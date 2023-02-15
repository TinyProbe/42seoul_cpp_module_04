/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:37:00 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 05:13:03 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

protected:

public:
	Cure();
	Cure(const Cure& rhs);
	Cure(std::string const& type);
	~Cure();
	Cure& operator=(const Cure& rhs);

	Cure* clone() const;
	void use(ICharacter& target);

};

#endif
