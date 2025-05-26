/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:02:46 by lmatkows          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:13 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	// int * a = new int();
	// std::cout << *a << std::endl;
	
	Array<int> defaultArray;
	Array<char> charArray(5);
	Array<int>	intArray(6);

	charArray[0] = 'a';
	std::cout << charArray[0] << std::endl;
	intArray[0] = 25;
	std::cout << intArray[0] << std::endl;
	
}
