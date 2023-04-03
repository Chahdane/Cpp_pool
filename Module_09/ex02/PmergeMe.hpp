#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int> deq;
	public:
		PmergeMe();
		~PmergeMe();
		void sort_vec();
		void sort_deq();
		void add(int num);

};
