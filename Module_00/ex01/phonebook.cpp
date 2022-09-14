/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:07:23 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/14 23:39:57 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <ostream>

int G = 0;
int stop = 0;

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
	int i = G;
	if (G >= 5)
		i = G % 5;
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
	phonebook->contacts[i].setIndex(i);
	G++;
}

std::string string_modifier(std::string str)
{

	if (str.length() < 10)
	{
		for (int i = str.length(); i < 10; i++)
			str+=" ";
	}
	else
	{
		str.erase(9);
		str+=".";
	}
	return str;
}

void search(Phonebook *phonebook)
{
	int	j;

	j = 0;
	while (j < G && phonebook->contacts[j].getFirstname() != "")
	{
		std::cout << phonebook->contacts[j].getIndex();
		std::cout<< "        |";
		std::cout << string_modifier(phonebook->contacts[j].getFirstname());
		std::cout<< "|";
		std::cout << phonebook->contacts[j].getLastname() << std::endl;
		j++;
	}
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
		else
			search(&phonebook);
	}
}
