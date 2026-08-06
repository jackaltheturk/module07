/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:09:10 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 06:09:13 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(NULL), _size(n)
{
	if (_size == 0)
		return ;
	_data = new T[_size]();
}

template <typename T>
Array<T>::Array(const Array &ref) : _data(NULL), _size(0)
{
	*this = ref;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &ref)
{
	if (this == &ref)
		return (*this);
	delete[] _data;
	_data = NULL;
	_size = ref._size;
	if (ref._size == 0)
		return (*this);
	_data = new T[_size]();
	for (unsigned int i = 0; i < _size; ++i)
		_data[i] = ref._data[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw IndexIsOutOfBoundsException();
	return (_data[n]);	
}

template <typename T>
const T &Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw IndexIsOutOfBoundsException();
	return (_data[n]);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _data;
}

template <typename T>
const char *Array<T>::IndexIsOutOfBoundsException::what() const throw()
{
	return ("Error: Array index is out of bounds!");
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

