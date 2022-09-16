/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:43:48 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/16 18:40:07 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

Replace::Replace(std::string filename, std::string str, std::string newstr)
{
    this->filename = filename;
    this->str = str;
    this->newstr = newstr;
    infile.open(filename);
    if (!infile.fail()) outfile.open(filename += ".replace");
}

Replace::~Replace()
{
    infile.close();
    outfile.close();
}

void Replace::copy_and_replace()
{
    std::string buffer;
    int index = -1;
    while (!infile.eof())
    {
        std::getline(infile, buffer);
        index = buffer.find(str);
        while (index >= 0)
        {
            replace_word(buffer, index);
            index = buffer.find(str);
        }
        outfile << buffer << std::endl;
        index = -1;
    }
}

void  Replace::replace_word(std::string &buffer, int index)
{
    std::string tmp;
    tmp = buffer;
    buffer.erase(index);
    buffer.insert(index ,newstr);
    tmp.erase(0, index + str.length());
    buffer += tmp;
}

bool    Replace::check_errors()
{
    if (infile.fail())
    {
        std::cout << "ERROR IN FILE" << std::endl;
        return false;
    }
    if (outfile.fail())
    {
        std::cout << "ERROR OUT FILE" << std::endl;
        return false;
    }
    return true;
}

   