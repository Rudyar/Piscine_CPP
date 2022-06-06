/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 19:43:32 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <stdlib.h>

class Contact
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

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
		int			get_index();
		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string	get_darkestsecret();
};

#endif
