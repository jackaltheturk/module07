/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:29 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 12:34:48 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T, typename F>
void iter(T* address, const size_t len, F func)
{
    if (!address)
    return;
	for (size_t i = 0; i < len; ++i)
        func(address[i]);
}
#endif