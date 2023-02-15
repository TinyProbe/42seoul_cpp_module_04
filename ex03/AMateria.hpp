/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:06:04 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 02:39:35 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;
class AMateria {

protected:
	std::string type;

public:
	AMateria();
	AMateria(const AMateria& rhs);
	AMateria(std::string const& type);
	virtual ~AMateria();
	AMateria& operator=(const AMateria& rhs);

	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif
