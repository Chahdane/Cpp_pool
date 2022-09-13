/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:27:47 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/13 23:50:42 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        int number;
        std::string darkest_secret;
};

class Phonebook
{
    public:
        Contact contacts[8];
};

