/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 16:23:28 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/03 01:55:41 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string.h>
# include <iostream>

template <typename T>
void	iter(T *array, const unsigned int len, void (*f)(T &element))
{
	for (unsigned int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

