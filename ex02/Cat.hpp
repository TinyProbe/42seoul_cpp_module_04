/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:27:06 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:48:51 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain* brain;

public:
	Cat();
	Cat(const Cat& rhs);
	virtual ~Cat();
	virtual Cat& operator=(const Cat& rhs);

	virtual void makeSound() const;

};

#endif
