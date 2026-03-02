/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:30:05 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/02 16:17:36 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string.h>
# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c; 
}

template <typename T>
T&		min(T& a, T& b)
{
	return (a == b ? b : (a < b ? a : b));
}

template <typename T>
T&		max(T& a, T& b)
{
	return (a == b ? b : (a > b ? a : b));
}
