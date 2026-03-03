/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 15:19:28 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/03 02:22:43 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printInt(int &n)
{
	std::cout << n << std::endl;
}

void	printChar(char &c)
{
	std::cout << c << std::endl;
}

void	printStr(const char* &s)
{
	std::cout << s << std::endl;
}

int	main(void)
{
	int			intArray[] = {1, 2, 3, 4, 5};
	char		charArray[] = {'a', 'b', 'c', 'd', 'e'};
	const char*	strArray[] = {"gpollast", "bsuger", "fmotte", "aautret", "tlorette"};
	
	std::cout << "=== Int ===" << std::endl;
	iter(intArray, 5, printInt);
	
	std::cout << "=== Char ===" << std::endl;
	iter(charArray, 5, printChar);
	
	std::cout << "=== Str ===" << std::endl;
	iter(strArray, 5, printStr);
	
	return (0);
}
