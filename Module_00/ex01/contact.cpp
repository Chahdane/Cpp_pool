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
