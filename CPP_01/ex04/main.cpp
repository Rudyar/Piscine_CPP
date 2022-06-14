/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:11:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:16:44 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

void	search_replace(std::string s1, std::string s2, std::ifstream &in, std::ofstream &out)
{
	std::string	buff;
	size_t	pos;

	if (s1.empty())
	{
		std::cerr << "Can't find an empty std::string in file..." << std::endl;
		exit(1);
	}
	while(std::getline(in, buff))
	{
		pos = buff.find(s1);
		while (pos != std::string::npos)
		{
			buff.erase(pos, s1.size());
			buff.insert(pos, s2);
			pos = buff.find(s1, pos + s2.size());
		}
		out << buff << std::endl;
	}
}

int main(int ac, char **av)
{
	std::ifstream	in(av[1]);
	std::ofstream	out;
	std::string		outfile_name;

	if (ac != 4)
	{
		std::cerr << "Args have to be : ./sed <filename> <s1> < s2>" << std::endl;
		return 1;
	}
	if (!in)
	{
		std::cerr << "Can't open " << av[1] << std::endl;
		return 1;
	}
	outfile_name = av[1];
	outfile_name += ".replace";
	out.open(outfile_name.c_str());
	if (!out)
	{
		std::cerr << "Can't open " << outfile_name << std::endl;
		return 1;
	}
	search_replace(av[2], av[3], in, out);
	in.close();
	out.close();
	return 0;
}
