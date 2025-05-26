/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:57:58 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/26 13:53:30 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

void	upLetter(char & c)
{
	c = static_cast<char>(std::toupper(c));
}

void	incrementInt(int & i)
{
	i++;
}

template <typename T>
void	printSomethingConst(const T & something)
{
	std::cout << something << ' ';
}

template <typename T>
void	printSomething(T & something)
{
	std::cout << something << ' ';
}

int	main(void)
{
	char		charTab[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	const char	constCharTab[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int			intTab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	const int	constIntTab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::cout << "const charTab :" << std::endl;
	iter(constCharTab, 10, printSomethingConst);
	std::cout << "\n\nconst intTab :" << std::endl;
	iter(constIntTab, 10, printSomethingConst);
	std::cout << "\n\ncharTab :" << std::endl;
	iter(charTab, 10, printSomething);
	std::cout << "\n\nintTab :" << std::endl;
	iter(intTab, 10, printSomething);

	std::cout << "\n\nIncrementation of intTab" << std::endl;
	iter(intTab, 10, incrementInt);
	iter(intTab, 10, printSomething);

	std::cout << "\n\nUpper charTab" << std::endl;
	iter(charTab, 10, upLetter);
	iter(charTab, 10, printSomething);
}
