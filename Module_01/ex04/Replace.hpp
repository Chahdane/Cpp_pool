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
        void    copy_and_replace();
        bool    check_errors();
        void    replace_word(std::string &buffer, int index);

};
