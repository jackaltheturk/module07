/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:29 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 07:02:11 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void iter(T *address, size_t arLen, void (*func)(T&))
{
	if (!address || !func)
		return ;
	for (size_t i = 0; i < arLen; i++)
	{
		func(address[i]);
	}
}
template <typename T>
void iter(const T *address, const size_t arLen, void (*func)(const T&))
{
	if (!address || !func)
		return ;
	for (size_t i = 0; i < arLen; i++)
	{
		func(address[i]);
	}
}
#endif