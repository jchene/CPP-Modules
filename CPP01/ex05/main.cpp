/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:00:21 by jchene            #+#    #+#             */
/*   Updated: 2022/10/07 15:38:37 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;

	test.complain("INFO");
	test.complain("DEBUG");
	test.complain("TEST");
	test.complain("WARNING");
	test.complain("ERROR");
	
	return (0);
}