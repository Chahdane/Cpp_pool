
#include "BitcoinExchange.hpp"
#include <string>



int main(int ac, char **av)
{


	(void)ac;
	(void)av;

	std::map<std::string, std::string> *inp;
	std::map<std::string, std::string> *dt;



	BitcoinExchange in("input.txt", true);
	BitcoinExchange data("data.csv", false);

	in.parse_file();
	data.parse_file();
	//data.print_data();
	inp = in.get_map();
	dt = data.get_map();

	


	std::map<std::string, std::string>::iterator it;

	it = inp->begin();
	while ( it != inp->end())
	{

		if (inp->find(it->first) != dt->end())
			std::cout << "alo" <<  std::endl;
		it++;
	}



	// std::list<Data>::iterator it;

	// it = a_data.begin();
	// while ( it != a_data.end())
	// {
	// 	std::cout << it->date << " -> "<< it->value <<   std::endl;
	// 	it++;
	// }

	// a.print_data();
	// b.print_data();

	// fn.close();
}