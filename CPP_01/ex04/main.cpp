/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:11:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 22:26:41 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

void	search_replace(string s1, string s2, ifstream &in, ofstream &out)
{
	string	buff;
	size_t	pos;

	if (s1.empty())
	{
		cerr << "Can't find an empty string in file..." << endl;
		exit(1);
	}
	while(getline(in, buff))
	{
		pos = buff.find(s1);
		while (pos != std::string::npos)
		{
			buff.erase(pos, s1.size());
			buff.insert(pos, s2);
			pos = buff.find(s1, pos + s2.size());
		}
		out << buff << endl;
	}
}

int main(int ac, char **av)
{
	ifstream	in(av[1]);
	ofstream	out;
	string		outfile_name;

	if (ac != 4)
	{
		cerr << "Args have to be : ./sed <filename> <s1> < s2>" << endl;
		return 1;
	}
	if (!in)
	{
		cerr << "Can't open " << av[1] << endl;
		return 1;
	}
	outfile_name = av[1];
	outfile_name += ".replace";
	out.open(outfile_name.c_str());
	if (!out)
	{
		cerr << "Can't open " << outfile_name << endl;
		return 1;
	}
	search_replace(av[2], av[3], in, out);
	in.close();
	out.close();
	return 0;
}
