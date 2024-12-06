#ifndef SEARCH_INSERT_POSITION_SOLUTION1_H_
#define SEARCH_INSERT_POSITION_SOLUTION1_H_

#include "questions/searchinsertposition/Solution.hpp"

int Solution1::searchInsert(std::vector<int> &nums, int target)
{
    int index = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= target)
        {
            index = i;
            break;
        }
    }
    return index;
}

#endif