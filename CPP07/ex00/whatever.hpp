/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <jchene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:49:42 by jchene            #+#    #+#             */
/*   Updated: 2022/12/21 17:49:23 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPROTEC
# define LIBPROTEC
# include <iostream>
# include <string>
#endif
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &v1, T &v2)
{
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
};

template <typename T>
T min(const T &v1, const T &v2)
{
	return (v1 < v2 ? v1 : v2);
}

template <typename T>
T max(const T &v1, const T &v2)
{
	return (v1 > v2 ? v1 : v2);
};

#endif