#ifndef MIN_STACK_SOLUTION1_H_
#define MIN_STACK_SOLUTION1_H_

#include "questions/minstack/Solution.hpp"

void Solution1::minstackPush(int val)
{
    // maintain sorted data
    minQueue.push(val);

    // increase data count
    if (countMap.find(val) != countMap.end())
    {
        countMap[val] += 1;
    }
    else
    {
        countMap[val] = 1;
    }

    // maintain order
    data.push_back(val);
}

void Solution1::minstackPop()
{
    // decrease data count
    auto top = minstackTop();
    if (countMap.find(top) != countMap.end())
    {
        countMap[top] -= 1;
        if (countMap[top] == 0)
        {
            countMap.erase(top);
        }
    }

    // maintain order
    data.pop_back();
}

int Solution1::minstackTop()
{
    return data.back();
}

int Solution1::minstackGetMin()
{
    // check the data in minQueue is still valid
    while (countMap.find(minQueue.top()) == countMap.end())
    {
        minQueue.pop();
    }

    return minQueue.top();
}

#endif