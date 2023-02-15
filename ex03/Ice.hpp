/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:36:59 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 05:13:58 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

protected:

public:
	Ice();
	Ice(const Ice& rhs);
	Ice(std::string const& type);
	~Ice();
	Ice& operator=(const Ice& rhs);

	Ice* clone() const;
	void use(ICharacter& target);

};

#endif
