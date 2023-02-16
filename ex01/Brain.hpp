/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:51:55 by tkong             #+#    #+#             */
/*   Updated: 2023/02/16 20:47:59 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define MAX_IDEA 100

class Brain {
	std::string idea[MAX_IDEA];
	int size;

public:
	Brain();
	Brain(const Brain& rhs);
	virtual ~Brain();
	virtual Brain& operator=(const Brain& rhs);

	virtual const std::string* getIdea() const;
	virtual const int& getSize() const;
	virtual void setIdea(const std::string& idea, const int& idx);
	virtual void setSize(const int& size);

};

#endif
