/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:57 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 06:09:01 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cmath>

template <typename T>

class Array
{
	private:
		T               *_data;
		unsigned int    _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &ref);
		Array &operator=(const Array &ref);
		T &operator[](unsigned int n);
		const T &operator[](unsigned int n) const;
		~Array();
		class IndexIsOutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw(); 
		};
		unsigned int size() const;
};

# include "Array.tpp"
#endif