/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:11:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 19:41:23 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int	check_str(string s)
{
	if (s.empty())
	{
		cout << "No empty arg" << endl;
			return 1;
	}
	for (size_t i = 0; i < s.size(); i++)
		if (s[i] != ' ' && s[i] != '	')
			return 0;
	cout << "Arg can't be only whitespaces" << endl;
	return 1;
}

void	open_files(string str, ifstream *in, ofstream *out)
{
	char	filename[str.size() + 1];
	// char	outfile_name[str.size() + 1];
	string	outfile_name;

	str.copy(filename, str.size() + 1);
	outfile_name = filename;
	outfile_name += ".replace";
	in->open(filename);
	if (in->fail())
	{
		cout << "Can't open" << filename << endl;
		exit(1);
	}
	out->open(outfile_name);
	if (out->fail())
	{
		cout << "Can't open" << outfile_name << endl;
		exit(1);
	}
}

int main(int ac, char **av)
{
	ifstream	*infile;
	ofstream	*outfile;

	if (ac != 4)
	{
		cout << "Args have to be : ./sed <filename> <s1> < s2>" << endl;
		return 1;
	}
	string filename = av[1];
	string s1 = av[2];
	string s2 = av[3];
	if (check_str(filename) || check_str(s1) || check_str(s2))\
		return 1;
	open_files(filename, infile, outfile);
	infile->close();
	outfile->close();
	return 0;
}
