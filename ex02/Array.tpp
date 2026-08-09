/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:09:10 by etorun            #+#    #+#             */
/*   Updated: 2026/08/09 05:58:27 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() 
{
    _array = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL) , _size(n) 
{
    if (n > 0)
        _array = new T[_size]();
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array& sample)
{
    this->_size = sample._size;   
    if(_size > 0)
        this->_array = new T[_size]();

    for (unsigned int i = 0; i < _size; i++)
        this->_array[i] = sample._array[i];
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (&other != this)
    {
        delete[] this->_array;
        
        this->_size = other._size;   
        this->_array = new T[_size]();

        for (unsigned int i = 0; i < _size; i++)
            this->_array[i] = other._array[i];
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    
    if (index >= _size) 
        throw std::out_of_range("Out of bounds!");
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size)
        throw std::out_of_range("Out of bounds!");
    return _array[index];
}

