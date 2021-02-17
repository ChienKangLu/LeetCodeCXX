#ifndef REMOVE_ELEMENT_SOLUTION1_H_
#define REMOVE_ELEMENT_SOLUTION1_H_

#include "questions/removeelement/Solution.hpp"

int Solution1::removeElement(std::vector<int> &nums, int val)
{
  int firstValIndex = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (firstValIndex == -1)
    {
      if (nums[i] == val)
      {
        firstValIndex = i;
      }
    }
    else
    {
      if (nums[i] != val && i > firstValIndex)
      {
        nums[firstValIndex] = nums[i];
        nums[i] = val;
        firstValIndex++;
      }
    }
  }
  return firstValIndex == -1 ? nums.size() : firstValIndex;
}

#endif