/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:51:56 by tkong             #+#    #+#             */
/*   Updated: 2023/02/24 10:22:45 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : size() {
	std::cout << "Brain Default constructor called\n";
}
Brain::Brain(const Brain& rhs) {
	std::cout << "Brain Copy constructor called\n";
	*this = rhs;
}
Brain::~Brain() {
	std::cout << "Brain Destructor called\n";
}
Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain Copy operator called\n";
	if (this == &rhs) {
		return *this;
	}
	for (int i = 0; i < MAX_IDEA; ++i) {
		this->idea[i] = rhs.idea[i];
	}
	this->size = rhs.size;
	return *this;
}

const std::string* Brain::getIdea() const { return this->idea; }
const int& Brain::getSize() const { return this->size; }
void Brain::setIdea(const std::string& idea, const int& idx) { this->idea[idx % MAX_IDEA] = idea; }
void Brain::setSize(const int& size) { this->size = size; }
