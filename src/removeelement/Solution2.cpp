#ifndef REMOVE_ELEMENT_SOLUTION2_H_
#define REMOVE_ELEMENT_SOLUTION2_H_

#include "questions/removeelement/Solution.hpp"

int Solution2::removeElement(std::vector<int> &nums, int val)
{
  int i = 0;
  for (int j = 0; j < nums.size(); j++)
  {
    if (nums[j] != val)
    {
      nums[i] = nums[j];
      i++;
    }
  }
  return i;
}

#endif