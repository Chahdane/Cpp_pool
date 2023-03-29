#include <iostream>
#include <iterator>
#include <vector>
 
template <typename T> typename T::iterator easyfind(T &data, int i)
{
    typename T::iterator it;
    it = find(data.begin(), data.end(), i);
    return (it != data.end() ? throw "Already exist" : it);
}

class Span
{
    private:
        std::vector<int> N;
		unsigned int size;
    public:
        Span();
		Span(unsigned int size);
		Span(const Span &rhs);
		Span &operator=(Span const & rhs);
        void addNumber(int n);
		void  addNumbers(int n, unsigned int len);
		void  range_of_iterators(std::vector<int>::iterator srart, std::vector<int>::iterator end);
		int shortestSpan(void) ;
		int longestSpan(void);
       	~Span();
};
