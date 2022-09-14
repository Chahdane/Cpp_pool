/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:07:23 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/14 22:55:41 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <ostream>

int i = 0;

void	prompt(std::string place_holder, std::string *buffer)
{
	std::cout << place_holder + ": ";
	std::getline(std::cin, *buffer);
	while (*buffer == "")
	{
		std::cout << "plese enter a valid " << place_holder << std::endl;
		std::cout << place_holder + ": ";
		std::getline(std::cin, *buffer);
	}
}

void add(Phonebook *phonebook)
{ 
	std::string buffer;
	prompt("First Name", &buffer);
	phonebook->contacts[i].setFirstname(buffer);
	prompt("Last Name", &buffer);
	phonebook->contacts[i].setLastname(buffer);
	prompt("Nickname", &buffer);
	phonebook->contacts[i].setNickname(buffer);
	prompt("Number", &buffer);
	phonebook->contacts[i].setNumber(buffer);
	prompt("Darkest Secret", &buffer);
	phonebook->contacts[i].setDarkestSecret(buffer);
	i++;
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
		if (buffer != "ADD" && buffer != "SEARCH" && buffer != "EXIT")
			std::cout<<"Command does not exist : try ADD SEARCH EXIT"<<std::endl;
		else if (buffer == "ADD")
			add(&phonebook);
	}
	std::cout << "->>" << std::endl;
	int j = 0;
	while (j < 3)
	{
		std::cout << phonebook.contacts[j].getFirstname() << std::endl;
		std::cout << phonebook.contacts[j].getLastname() << std::endl;
		j++;
	}
}
