/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:53:52 by jchene            #+#    #+#             */
/*   Updated: 2022/10/07 16:14:37 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl(void) {}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl
			  << "I cannot believe adding extra bacon costs more money. "
			  << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
			  << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
			  << "I really do!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl
			  << "I think I deserve to have some extra bacon for free. "
			  << "I've been coming for years whereas you started working here since last month."
			  << std::endl;
}

void Harl::badComplain(void) {}

void Harl::complain(std::string level)
{
	void (Harl::*functionPointers[])(void) = {&Harl::badComplain, &Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
	std::map<std::string, int> map;
	map["INFO"] = 1;
	map["DEBUG"] = 2;
	map["WARNING"] = 3;
	map["ERROR"] = 4;
	(this->*functionPointers[map[level]])();
}

Harl::~Harl() {}