/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:32:48 by jchene            #+#    #+#             */
/*   Updated: 2022/11/17 18:02:10 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSGS
#define MSGS 1
#endif
#ifndef LIBPROTEC
#define LIBPROTEC
#include <iostream>
#include <string>
#endif
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif