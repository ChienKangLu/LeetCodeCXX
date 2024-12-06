#ifndef SEARCH_INSERT_POSITION_SOLUTION1_H_
#define SEARCH_INSERT_POSITION_SOLUTION1_H_

#include "questions/searchinsertposition/Solution.hpp"
#include <iostream>

int Solution2::searchInsert(std::vector<int> &nums, int target)
{
    if (nums[0] >= target)
    {
        return 0;
    }
    else if (nums[nums.size() - 1] == target)
    {
        return nums.size() - 1;
    }
    else if (nums[nums.size() - 1] < target)
    {
        return nums.size();
    }

    int index = nums.size();
    int start = 0;
    int end = nums.size() - 1;
    int mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            index = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
            index = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return index;
}

#endif