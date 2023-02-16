/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:03 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:48:51 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& rhs);
	virtual ~Animal();
	virtual Animal& operator=(const Animal& rhs);

	virtual const std::string& getType() const;
	virtual void makeSound() const = 0;

};

#endif
