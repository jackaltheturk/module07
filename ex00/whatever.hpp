/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:02 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 06:08:02 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
T min(const T& x,const T& y)
{
    if (y > x)
        return x;
    return y;
}

template <typename T>
T max(const T& x,const T& y)
{
    if (y < x)
        return x;
    return y;
}

template <typename T>
void swap(T& x, T& y)
{
    T z = x;

    x = y;
    y = z;
}

#endif