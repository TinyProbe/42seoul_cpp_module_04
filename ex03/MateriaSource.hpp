/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:49:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:50:20 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define MAX_SLOT 4

class MateriaSource : public IMateriaSource {
	AMateria* slot[MAX_SLOT];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& rhs);
	virtual ~MateriaSource();
	virtual MateriaSource& operator=(const MateriaSource& rhs);

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const& type);

};

#endif 
