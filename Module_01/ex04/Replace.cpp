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
        if (str == newstr) index = -1;
        while (index >= 0)
        {
            replace_word(buffer, index);
            index += newstr.length();
            index = buffer.find(str, index);
        }
        outfile << buffer << std::endl;
        index = -1;
    }
}

void  Replace::replace_word(std::string &buffer, int index)
{
    buffer.erase(index, str.length()); 
    buffer.insert(index ,newstr);
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

   