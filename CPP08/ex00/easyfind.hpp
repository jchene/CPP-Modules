/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:49:42 by jchene            #+#    #+#             */
/*   Updated: 2022/12/22 19:20:31 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPROTEC
#define LIBPROTEC
# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
#endif
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

class noOccurenceException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("No occurences found");
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
	typename T::iterator location = std::find(container.begin(), container.end(), number);
	if (location == container.end())
		throw ::noOccurenceException();
	return (location);
}

#endif