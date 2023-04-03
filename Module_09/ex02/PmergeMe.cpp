#include "PmergeMe.hpp"
using namespace std;


PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::add(int num)
{
	vec.push_back(num);
    deq.push_back(num);
}


template<typename container>
void insertion_sort(container& nums, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >= left && nums[j] > key) {
            nums[j + 1] = nums[j];
            --j;
        }
        nums[j + 1] = key;
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
	for(int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << " ";
		if (i == 9) break;
	}
		
	if (nums.size() > 10)
		std::cout << " [...]" << std::endl;
	std::cout << std::endl;
}

template<typename container>
void merge_insert_sort(container& nums, std::string type) {
	struct timeval start;
	struct timeval end_t;
	size_t time;
	std::cout << "Before: ";
	print_con(nums);
	gettimeofday(&start, NULL);
    merge_insertion_sort(nums, 0, nums.size() - 1);
	gettimeofday(&end_t, NULL);
	std::cout << "After: ";
	print_con(nums);
	time = ((end_t.tv_sec * 1000000) + end_t.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
	std::cout << "Time to process a range of " << nums.size() << " elements with std::" + type + ": " << time << " us" << std::endl;

}


void PmergeMe::sort_vec()
{
	merge_insert_sort(vec, "vector");
}



void PmergeMe::sort_deq()
{
	merge_insert_sort(deq, "deque");
}





