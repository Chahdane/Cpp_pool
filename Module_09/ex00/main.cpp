
#include "BitcoinExchange.hpp"
#include <string>

#include <unistd.h>


int handle_errors(std::string date, std::string value)
{
	if (value == "err:NPN")
		return (std::cout << "Error: not a positive number." << std::endl, 1);

	if (value == "err:LN")
		return (std::cout << "Error: too large a number." << std::endl, 1);
	if (!value.find("err:BI"))
		return (std::cout << "Error: blabla" << std::endl, 1);
	if (date.find("err:BI") == 0)
	{
		date = date.erase(0,6);
		return (std::cout << "Error: bad input" << " => " << date << std::endl, 1);
	}
	return 0;
}

void exec(std::map<std::string, std::string> *dt)
{
	std::ifstream fn("input.txt");
	std::string line;
	std::string date;
	std::string value;
	double res;
	while (getline (fn, line))
	{
		date = get_date_from_str(line, true);
		value = get_value_from_str(line, true);

		if(handle_errors(date, value))
			continue;
		std::map<std::string, std::string>::iterator iter = dt->find(date);
		if (iter == dt->end())
			iter = dt->lower_bound(date);
		res = std::stod(iter->second) * std::stod(value);
		std::cout << date << " => " << value << " = " << res << std::endl;
	}
}

int main(int ac, char **av)
{


	(void)ac;
	(void)av;

	std::map<std::string, std::string> *dt;

	BitcoinExchange data("data2.csv", false);

	data.parse_file();

	dt = data.get_map();

	exec(dt);

}