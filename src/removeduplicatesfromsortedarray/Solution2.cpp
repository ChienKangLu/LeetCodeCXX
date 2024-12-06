#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_SOLUTION2_H_
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_SOLUTION2_H_

#include "questions/removeduplicatesfromsortedarray/Solution.hpp"

/**
 * New idea! Move all non-duplicates to the front of vector and return the last index of non-duplicated as size.
 */
int Solution2::removeDuplicates(std::vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }

    int lastIndex = 0; // the first item of duplicates
    for (int i = lastIndex; i < nums.size(); i++)
    {
        if (nums[i] != nums[lastIndex])
        {
            lastIndex++;
            if (i != lastIndex)
            {
                int temp = nums[i];
                nums[i] = nums[lastIndex];
                nums[lastIndex] = temp;
            }
        }
    }
    return lastIndex + 1;
}

#endif