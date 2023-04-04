#include "PmergeMe.hpp"
using namespace std;


PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::add(int num)
{
	vec.push_back(num);
    deq.push_front(num);
}


template<typename container>
void insertion_sort(container& nums, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >= left && key < nums[j]) {
            nums[j + 1] = nums[j];
			nums[j] = key;
            --j;
        }
    }
}

template<typename container>
void merge_insertion_sort(container& nums, int left, int right) {
    if (right - left + 1 <= 5) {
        insertion_sort(nums, left, right);
        return;
    }
    int mid = left + (right - left) / 2;
    merge_insertion_sort(nums, left, mid);
    merge_insertion_sort(nums, mid + 1, right);
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (nums[i] < nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = nums[i++];
    }
    while (j <= right) {
        temp[k++] = nums[j++];
    }
    for (i = left, k = 0; i <= right; ++i, ++k) {
        nums[i] = temp[k];
    }
}

template<typename container>
void print_con(container& nums)
{
	for(size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << " ";
		if (i == 19) break;
	}
		
	if (nums.size() > 20)
		std::cout << " [...]" << std::endl;
}

template<typename container>
void merge_insert_sort(container& nums, std::string type) {
	if (type == "vector")
	{
		std::cout << "Before: ";
		print_con(nums);
	}
	std::clock_t start_time = std::clock();
    merge_insertion_sort(nums, 0, nums.size() - 1);
	std::clock_t end_time = std::clock();
	double time = (end_time - start_time) / (double)CLOCKS_PER_SEC;
	if (type == "vector")
	{
		std::cout << "After : ";
		print_con(nums);
	}
	std::cout << "Time to process a range of " << nums.size() << " elements with std::" + type + " : " << time * 1000000 << " us" << std::endl;

}


void PmergeMe::sort_vec()
{
	merge_insert_sort(vec, "vector");
}



void PmergeMe::sort_deq()
{
	merge_insert_sort(deq, "deque");
}


PmergeMe::PmergeMe(const PmergeMe &rhs)
{
	this->vec = rhs.vec;
	this->deq = rhs.deq;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &rhs) 
{
    this->vec = rhs.vec;
	this->deq = rhs.deq;
    return (*this); 
}


