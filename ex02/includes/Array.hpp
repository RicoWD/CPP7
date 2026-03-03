/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:23:28 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/03 20:34:53 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string.h>
# include <iostream>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		int	_size;
		T	*array;

	public:
		// OCF
		
		Array(): _size(0), array(0) {};
		Array(int size): _size(size) { array = new T[_size](); }
		Array(const Array &cpy): _size(cpy._size)
		{
			if (_size > 0)
			{
				array = new T[_size]();
				for (int i = 0; i < _size; i++)
					array[i] = cpy.array[i];
			}
			else
				array = 0;
		};
		Array&	operator=(const Array &cpy)
		{
			if (this != &cpy)
			{
				delete[] array; 
				_size = cpy._size;
				if (_size > 0)
				{
					array = new T[_size]();
					for (int i = 0; i < _size; i++)
						array[i] = cpy.array[i];
				}
				else
					array = 0;
			}
			return (*this); 
		}
		~Array() { delete[] array; };
		
		// Member functions - Templates
		
		int	size() const { return _size; }
		
		T&			operator[](int i)
		{
			if (i < 0 || i >= this->size())
				throw std::out_of_range("Error: index out of range");
			return (this->array[i]);
		}
		
		const T&	operator[](int index) const
		{
			if (index < 0 || index >= this->size())
				throw std::out_of_range("Error: index out of range");
			return (this->array[index]);
		}
};
