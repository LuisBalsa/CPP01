/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/12/13 12:00:54 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string variable: " << &str;
	std::cout << "\nThe memory address held by stringPTR: " << stringPTR;
	std::cout << "\nThe memory address held by stringREF: " << &stringREF;
	std::cout << "\nThe value of the string variable: " << str;
	std::cout << "\nThe value pointed to by stringPTR: " << *stringPTR;
	std::cout << "\nThe value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}


