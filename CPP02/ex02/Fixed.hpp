/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:22:13 by jchene            #+#    #+#             */
/*   Updated: 2022/10/18 18:21:56 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fBits = 8;

public:
	Fixed();
	Fixed(const Fixed &cpy);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

	Fixed &operator=(const Fixed &rhs);
	Fixed operator+(const Fixed &rhs);
	Fixed operator-(const Fixed &rhs);
	Fixed operator*(const Fixed &rhs);
	Fixed operator/(const Fixed &rhs);
	Fixed operator++();
	Fixed operator++(int);
	bool operator>(const Fixed &rhs);
	bool operator<(const Fixed &rhs);
	bool operator>=(const Fixed &rhs);
	bool operator<=(const Fixed &rhs);
	bool operator==(const Fixed &rhs);
	bool operator!=(const Fixed &rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &ref1, Fixed &ref2);
	static const Fixed &min(const Fixed &ref1, const Fixed &ref2);
	static Fixed &max(Fixed &ref1, Fixed &ref2);
	static const Fixed &max(const Fixed &ref1, const Fixed &ref2);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &ref);

#endif