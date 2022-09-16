/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahdan <achahdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:40:26 by achahdan          #+#    #+#             */
/*   Updated: 2022/09/16 18:26:04 by achahdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

class Replace
{
    private:
        std::string filename;
        std::string str;
        std::string newstr;
        std::ifstream infile;
        std::ofstream outfile;
    public:
        Replace(std::string filename, std::string str, std::string newstr);
        ~Replace();
        void    copy();
        bool    check_errors();
        void  replace_one_word(std::string &buffer, int index);

};
