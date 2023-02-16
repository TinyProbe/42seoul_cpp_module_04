/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:05 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:47:59 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain* brain;

public:
	Dog();
	Dog(const Dog& rhs);
	virtual ~Dog();
	virtual Dog& operator=(const Dog& rhs);

	virtual void makeSound() const;
	virtual void show() const;
	virtual void think(const std::string& idea);

};

#endif
