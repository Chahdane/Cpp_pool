#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <sys/time.h>
#include <ctime>


class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &rhs);
        PmergeMe &operator=(const PmergeMe &rhs);
		void sort_vec();
		void sort_deq();
		void add(int num);

};
