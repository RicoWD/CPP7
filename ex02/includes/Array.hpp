/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:23:28 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/03 02:33:07 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string.h>
# include <iostream>

class Array
{
	public:
		// OCF
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array&	operator=(const Array &other);
		~Array();
		
		// Member functions
		template <typename T>
		unsigned int	size() const
		{
			return (sizeof(this->array) / sizeof(T));
		}
		
		template <typename T>
		T&				operator[](unsigned int i)
		{
			if (i >= this->size<T>())
				throw std::out_of_range("index out of range");
			return (this->array[i]);
		}
		
		template <typename T>
		const T&		operator[](unsigned int index) const
		{
			if (index >= this->size<T>())
				throw std::out_of_range("index out of range");
			return (this->array[index]);
		}
};