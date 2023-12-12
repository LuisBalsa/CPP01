/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/12/12 17:11:59 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*zombies;
	int		nbr;

	std::cout << "\033[2J\033[1;1H";
	std::cout << "How many zombies do you want to create? ";
	while (!(std::cin >> nbr) || nbr < 0)
	{
		std::cout << "Invalid input. Try again: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	zombies = zombieHorde(nbr, "Zombie");
	for (int i = 0; i < nbr; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
