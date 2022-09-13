/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:07:23 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/13 23:52:55 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <ostream>

int i = 0;

void add(Phonebook fb)
{
	Contact cont; 
	fb.contacts[i] = cont;
	i++;
	std::cout << "FIRST NAME : " << std::endl;
	std::getline(std::cin, cont.first_name);
	// std::cout << "LAST NAME : " << std::endl;
	// std::getline(std::cin, cont.last_name);
}

int	main()
{
	std::string buffer;
	Phonebook phonebook;
	std::cout<<"PHONEBOOK : SEARCH ADD EXIT"<<std::endl;
	while (buffer != "EXIT")
	{
		std::cout<<">> ";
		std::getline(std::cin, buffer);
		if (buffer != "ADD" && buffer != "SEARCH")
			std::cout<<"Command does not exist : try ADD SEARCH EXIT"<<std::endl;
		else if (buffer == "ADD")
			add(phonebook);
		std::cout<<phonebook.contacts[i].first_name << std::endl;
	}
}
