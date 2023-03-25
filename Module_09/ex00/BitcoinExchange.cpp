#include "BitcoinExchange.hpp"
#include <limits.h>

#include <cctype>

bool isNumeric(std::string str) {
    bool decimalPoint = false;
    for (unsigned int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            if (str[i] == '.' && !decimalPoint) {
                decimalPoint = true;
            } else {
                return false;
            }
        }
    }
    return true;
}

BitcoinExchange::BitcoinExchange(std::string file_name, bool is_input_file)
{
	data = new std::map<std::string, std::string>();
	this->in_file = file_name;
	this->is_input_file = is_input_file;
}

std::string get_value_from_str(std::string str, bool is_input_file)
{
	int i = 0;
	char charset;
	int index;

	!is_input_file ? charset = ',' : charset = '|';

	index = str.find(charset);
	if ( index == -1)
		return ("Error: bad input");
	str =  str.substr(index + 1);
	i = str.find(str);

	for (; str[i] == ' '; i++);
	str =  str.substr(i);
	if (!isNumeric(str))
	{
		if (str[i - 1] == '-')
			return ("err:NPN");
	}
	if (stod(str) > INT_MAX)
		return ("err:LN");

	return str;
}

std::string get_date_from_str(std::string str, bool is_input_file)
{
	char charset;
	int index;
	std::string month = "";
	std::string day = "";

	!is_input_file ? charset = ',' : charset = '|';
	index = str.find(charset);
	if ( index == -1)
		return ("err:BI" + str);
	str =  str.substr(0, str.find(charset));
	str.erase(str.find_last_not_of(" \t\r\n") + 1);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			if (str[i] == '-')
				continue;
		if (!isdigit(str[i]))
			return ("err:BI" + str);
		if (i == 5 || i == 6)
			month += str[i];
		if (i == 8 || i == 9)
			day += str[i];
	}

	if (stoi(month) > 12 || stoi(day)> 31)
		return ("err:BI" + str);

	return str;
}

void BitcoinExchange::parse_file(){

	std::string line;
	std::string date;
	std::string charset;

	!is_input_file ? charset = "," : charset = " | ";

	std::ifstream fn(this->in_file);

	while (getline (fn, line))
	{
		if ((line == "date,exchange_rate" && !is_input_file) || (line == "date | value" && is_input_file))
			continue;
		(*data)[get_date_from_str(line, is_input_file)] =   get_value_from_str(line, is_input_file);
	}
}

std::map<std::string, std::string>* BitcoinExchange::get_map()
{
	return this->data;
}


void BitcoinExchange::print_data()
{

	std::map<std::string, std::string>::iterator it;

	it = data->begin();
	while ( it != data->end())
	{
		std::cout << it->first << " -> "<< it->second <<   std::endl;
		it++;
	}
	
}

BitcoinExchange::~BitcoinExchange()
{
}