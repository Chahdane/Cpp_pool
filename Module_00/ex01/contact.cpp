/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:44:34 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 02:28:45 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// SETTERS:

void Contact::setFirstname(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::setLastname(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(std::string nick_name)
{
	this->nick_name = nick_name;
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

// GETTERS:

std::string Contact::getFirstname(void)
{
    return first_name;
}

std::string Contact::getLastname(void)
{
    return last_name;
}

std::string Contact::getNickname(void)
{
    return nick_name;
}

std::string Contact::getNumber(void)
{
    return number;
}

std::string Contact::getDarkestSecret(void)
{
    return darkest_secret;
}