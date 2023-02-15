/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:51:55 by tkong             #+#    #+#             */
/*   Updated: 2023/02/15 21:56:43 by tkong            ###   ########.fr       */
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
	~Brain();
	Brain& operator=(const Brain& rhs);

	const std::string* getIdea() const;
	const int& getSize() const;
	void setIdea(const std::string& idea, const int& idx);
	void setSize(const int& size);

};

#endif
