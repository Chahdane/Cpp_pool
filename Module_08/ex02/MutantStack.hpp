#include <iostream>
#include <iterator>
#include <stack>
#include <algorithm>

template <typename T> class MutantStack :public std::stack<T>
{
	private:
		/* data */
	public:
		MutantStack(){};
		MutantStack<T>(const MutantStack<T> &rhs){
			*this = rhs;
		}
		MutantStack<T>	&operator=(const MutantStack<T> &rhs) {
			*this = rhs;
			return *this;
    	}
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};
