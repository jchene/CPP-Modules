/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:13:47 by jchene            #+#    #+#             */
/*   Updated: 2022/10/14 13:51:49 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(Fixed &cpy) : _value(cpy._value) { std::cout << "Copy constructor called" << std::endl; }

Fixed &Fixed::operator=(Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&rhs != this)
		this->_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}