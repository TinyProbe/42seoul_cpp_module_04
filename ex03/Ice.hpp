/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:36:59 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 11:12:53 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	Ice(const Ice& rhs);
	Ice(std::string const& type);
	virtual ~Ice();
	virtual Ice& operator=(const Ice& rhs);

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);

};

#endif
