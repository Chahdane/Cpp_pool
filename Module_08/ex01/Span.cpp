#include "Span.hpp"
# include <algorithm>

Span::Span(){
	size = 0;
}

Span::Span(unsigned int size)
{
	if (size <= 1)
		throw ("can't assign negative or null size");
    this->size = size;
}

Span::Span(const Span &rhs)
{
	std::cout << "Copy Constructor called for Span" << std::endl;
	this->size = rhs.size;
	this->N = rhs.N;
}

Span &Span::operator=(Span const & rhs)
{
	std::cout << "Assignement operator called for Span" << std::endl;
	this->size = rhs.size;
	this->N = rhs.N;
	return *this;
}

void Span::addNumber(int n)
{
	if (N.size() >= size) throw "can not add more";
    std::vector<int>::iterator it;
    it = easyfind(N, n);
    N.push_back(n);
}

void    Span::addNumbers(int n, unsigned int len)
{
	if (N.size() + len > size)
		throw "cannot add";
	for (unsigned int i = 0 ; i < len ; i++, n++)
		N.push_back(n);
}

int Span::longestSpan(void)  {

	if (size < 2) throw "less than 2";
	int max = *std::max_element(N.begin(), N.end());
	int min = *std::min_element(N.begin(), N.end());
	return max - min;
}


int Span::shortestSpan(void)  {

	if (size < 2) throw "less than 2";
	std::vector<int> tmp = N;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator nx = next(it);
	int res = *nx - *it;
	for (it++, nx = next(it); nx != tmp.end(); it++, nx = next(it))
	{
		if (*nx - *it < res)
			res = *nx - *it;
	}
	return res;
}	

void Span::range_of_iterators(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	std::vector<int> tmp(start, end);
	if (tmp.size() + N.size() > size)
		throw "not enough space";
	N.insert(N.end(), tmp.begin(), tmp.end());
}

Span::~Span(){

}