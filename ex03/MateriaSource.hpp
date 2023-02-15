/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:49:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 05:04:26 by tkong            ###   ########.fr       */
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
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const& type);

};

#endif 
