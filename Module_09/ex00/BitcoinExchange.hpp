
#include <iostream>
#include <fstream>
#include <map>


struct Data {
    std::string date;
    std::string value;
};


class BitcoinExchange
{
	private:
		std::string in_file;
		bool is_input_file;
		std::map<std::string, std::string>* data;
	public:
		BitcoinExchange(std::string file_name, bool is_input_file);
		void parse_file();
		void print_data();
		std::map<std::string, std::string>* get_map();
		~BitcoinExchange();
};

