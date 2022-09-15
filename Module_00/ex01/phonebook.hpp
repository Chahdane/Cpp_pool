/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:27:47 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/15 01:15:10 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string number;
		std::string darkest_secret;
	public:
		void	setFirstname(std::string first_name);
		void	setLastname(std::string last_name);
		void	setNickname(std::string nick_name);
		void	setNumber(std::string number);
		void	setDarkestSecret(std::string darkest_secret);
		std::string getFirstname(void);
		std::string getLastname(void);
		std::string getNickname(void);
		std::string	getNumber(void);
		std::string getDarkestSecret(void);		
};

class Phonebook
{
	public:
		Contact contacts[8];
};

