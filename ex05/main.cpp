/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/12/18 16:02:46 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	printMenu(void)
{
	std::cout << "\033[2J\033[1;1H";
	std::cout << "Welcome to Harl's Complainer\n\n";
	std::cout << "Choose a level of complaint:\n";
	std::cout << "DEBUG\nINFO\nWARNING\nERROR\n";
	std::cout << "Press enter to exit\n\n";
}

int	main(void)
{
	Harl	harl;
	std::string	level;

	printMenu();
	while (std::getline(std::cin, level))
	{
		if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
			harl.complain(level);
		else if (level.empty())
			break ;
		else
		{
			std::cout << "Invalid level\n\n";
			continue;
		}
		std::cout << "\nPress enter to continue\n";
		std::getline(std::cin, level);
		printMenu();
	}
	std::cout << "\033[2J\033[1;1H";
	return (0);
}

