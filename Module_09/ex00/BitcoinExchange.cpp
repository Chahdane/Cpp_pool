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
	char charset;
	int index;

	!is_input_file ? charset = ',' : charset = '|';

	index = str.find(charset);
	if (index == -1)
		return ("Error: bad input");
	!is_input_file ? str =  str =  str.substr(index + 1): str =  str.substr(index + 2);
	if (!isdigit(str[0]) && str[0] != '-')
		return ("err:BI");
	if (!isNumeric(str))
	{
		if (str[0] == '-')
			return ("err:NPN");
	}
	if (!isNumeric(str)) return ("err:BI" + str);
	if (stod(str) > 1000 && is_input_file)
		return ("err:LN");
	return str;
}

std::string get_date_from_str(std::string str, bool is_input_file)
{
	char charset;
	int index;
	std::string month = "";
	std::string day = "";
	std::string year = "";
	!is_input_file ? charset = ',' : charset = '|';
	index = str.find(charset);
	if ( index == -1)
		return ("err:BI" + str);
	!is_input_file ? str =  str.substr(0, str.find(charset)) : str =  str.substr(0, str.find(charset) - 1);
	for (int i = 0; i < 10; i++)
	{
		if (i < 4)
			year+= str[i];
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
	if (str[10]) return ("err:BI" + str);

	if (stoi(month) > 12 || stoi(month) < 1 || stoi(day)> 31 || stoi(day) < 1 || stod(year) > 2023 || stod(year) < 2009)
		return ("err:BI" + str);

	return str;
}

void BitcoinExchange::parse_file(){

	std::string line;
	std::string date;
	std::string charset;

	!is_input_file ? charset = "," : charset = " | ";

	std::ifstream fn(this->in_file);
	if (!fn)
		exit(1);
	while (getline (fn, line))
	{
		if (line == "date,exchange_rate" && !is_input_file)
			continue;
		(*data)[get_date_from_str(line, is_input_file)] =   get_value_from_str(line, is_input_file);
	}
	fn.close();
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

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	this->in_file = rhs.in_file;
	this->is_input_file = rhs.is_input_file;
	this->data = rhs.data;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &rhs) 
{
	this->in_file = rhs.in_file;
	this->is_input_file = rhs.is_input_file;
	this->data = rhs.data;
    return (*this); 
}

BitcoinExchange::~BitcoinExchange()
{
}