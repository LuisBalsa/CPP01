/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luide-so <luide-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:24:48 by luide-so          #+#    #+#             */
/*   Updated: 2023/12/14 00:09:07 by luide-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

std::string	myReplace(std::string &imput, const std::string &s1, const std::string &s2)
{
	size_t		pos = 0;

	while ((pos = imput.find(s1, pos)) != std::string::npos)
	{
		imput = imput.substr(0, pos) + s2 + imput.substr(pos + s1.length());
		pos += s2.length();
	}
	return (imput);
}

template <typename T>
int		error_file(T &file, std::string filename)
{
	if (file.fail())
	{
		std::cout << "Error: could not open/create file " << filename << std::endl;
		return (1);
	}
	return (0);
}

void		check_arguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <string_to_find> <string_to_replace>";\
		std::cout << std::endl;
		exit(1);
	}

	std::string		s1 = argv[2];
	if (s1.empty())
	{
		std::cout << "Error: string to find is empty" << std::endl;
		exit(1);
	}
}

int		main(int argc, char **argv)
{
	check_arguments(argc, argv);
	std::string		newFile = argv[1] + std::string(".replace");
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		imput;

	std::ifstream	file(argv[1]);
	if (error_file(file, argv[1]))
		return (1);

	std::ofstream	new_file(newFile.c_str());
	if (error_file(new_file, newFile))
		return (2);

	if (s1 == s2)
		new_file << file.rdbuf();

	while (std::getline(file, imput))
		new_file << myReplace(imput, s1, s2) << "\n";
	file.close();
	new_file.close();
	return (0);
}

