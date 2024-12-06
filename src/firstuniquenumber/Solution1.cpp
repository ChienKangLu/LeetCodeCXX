#ifndef FIRST_UNIQUE_NUMBER_SOLUTION1_H_
#define FIRST_UNIQUE_NUMBER_SOLUTION1_H_

#include "questions/firstuniquenumber/Solution.hpp"

Solution1::Solution1(vector<int> &nums) : FirstUniqueNumber(nums)
{
    for (auto it : nums)
    {
        add(it);
    }
}

int Solution1::showFirstUnique()
{
    while (!queue.empty() && occur[queue.front()] > 1)
    {
        queue.pop();
    }
    if (queue.empty())
    {
        return -1;
    }
    return queue.front();
}

void Solution1::add(int value)
{
    occur[value]++;
    queue.push(value);
}

#endif