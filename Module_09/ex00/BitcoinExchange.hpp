
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::string in_file;
		bool is_input_file;
		std::map<std::string, std::string>* data;
	public:
		BitcoinExchange(std::string file_name, bool is_input_file);
		BitcoinExchange(const BitcoinExchange &rhs);
        BitcoinExchange &operator=(const BitcoinExchange &rhs);
		void parse_file();
		void print_data();
		std::map<std::string, std::string>* get_map();
		~BitcoinExchange();
};

std::string get_date_from_str(std::string str, bool is_input_file);
std::string get_value_from_str(std::string str, bool is_input_file);