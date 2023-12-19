/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/12/19 15:01:10 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harlFilter(std::string level)
{
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	Harl	harl;

	switch (level[0])
	{
		case 'D':
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			// fall through
		case 'I':
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
			// fall through
		case 'W':
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			// fall through
		case 'E':
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			break ;
	}
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}
	harlFilter(argv[1]);
	return (0);
}

