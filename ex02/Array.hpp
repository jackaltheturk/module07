/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:57 by etorun            #+#    #+#             */
/*   Updated: 2026/08/07 06:48:08 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private:
        T* _array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array& sample);
        Array& operator=(const Array& other);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;
};
#include "Array.tpp"
#endif