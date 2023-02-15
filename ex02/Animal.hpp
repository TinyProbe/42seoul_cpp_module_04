/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:03 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 22:32:15 by tkong            ###   ########.fr       */
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
	Animal& operator=(const Animal& rhs);

	const std::string& getType() const;
	virtual void makeSound() const = 0;

};

#endif
