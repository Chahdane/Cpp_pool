#include "Convert.hpp"

Convert::Convert(std::string data)
{
	this->data = data;
}

Convert::Convert(const Convert &rhs)
{
	data = rhs.data;
}

Convert &Convert::operator=(const Convert &rhs)
{
	data = rhs.data;
	return *this;
}

void Convert::toInt()
{
	int tmp;
	try 
	{
		tmp = stoi(data);
	}
	catch (...)
	{
		std::cout<< "int: impossible"<<std::endl;
		return ;
	}
	std::cout<< "int: " << tmp <<std::endl;
}

void Convert::toChar()
{
	int tmp;
	try 
	{
		tmp = stoi(data);
	}
	catch (...)
	{
		std::cout<< "char: impossible"<<std::endl;
		return ;
	}
	std::cout<< "char: ";
	(tmp < 32 || tmp > 126)? std::cout << "Non displayable" : std::cout << "'"<< (char)tmp << "'";
	std::cout<<std::endl;
}

void Convert::toFloat()
{
	float tmp;
	try 
	{
		if (data == "+inf" || data == "-inf")
			throw 1;
		tmp = stof(data);
	}
	catch (...)
	{
		std::cout<< "float: impossible"<<std::endl;
		return ;
	}
	std::cout << "float: " << tmp;
	int tmp2 = tmp;
	float res = tmp - tmp2;
	(!res) ? std::cout << ".0f" : std::cout << "f";
	std::cout << std::endl;	
}

void Convert::toDouble()
{
	double tmp;
	try 
	{
		if (data == "+inf" || data == "-inf")
			throw 1;
		tmp = stod(data);
	}
	catch (...)
	{
		std::cout<< "double: impossible"<<std::endl;
		return ;
	}
	std::cout<< "double: " << tmp;
	int tmp2 = tmp;
	double res = tmp - tmp2;
	if (!res) std::cout << ".0";
	std::cout << std::endl;	
}

void Convert::convert()
{
	toInt();
	toChar();
	toFloat();
	toDouble();
}

Convert::~Convert()
{
}