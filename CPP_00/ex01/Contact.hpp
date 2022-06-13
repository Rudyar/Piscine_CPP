/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/13 19:08:16 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

# define RES "\e[0m"
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define CYAN "\e[0;36m"
# define YELLOW "\e[0;33m"
# define MAG "\e[0;35m"

class Contact
{
	private:
		int			index;
		string	first_name;
		string	last_name;
		string	nick_name;
		string	phone_number;
		string	darkest_secret;

	public:
		Contact();
		~Contact();
		void		random_create(int i);
		void		create_contact(int i);
		void		set_firstname();
		void		set_lastname();
		void		set_nickname();
		void		set_phonenumber();
		void		set_darkestsecret();
		void		set_index(int index);
		void		display_contact();
		int			get_index();
		string		get_firstname();
		string		get_lastname();
		string		get_nickname();
		string		get_phonenumber();
		string		get_darkestsecret();
};

void	contact_header();

#endif
