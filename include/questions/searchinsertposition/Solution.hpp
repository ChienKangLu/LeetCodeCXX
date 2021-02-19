#ifndef QUESTIONS_SEARCH_INSERT_POSITION_SOLUTION_H_
#define QUESTIONS_SEARCH_INSERT_POSITION_SOLUTION_H_

#include "SearchInsertPosition.hpp"

class Solution1 : SearchInsertPosition
{
public:
  int searchInsert(std::vector<int>& nums, int target) override;
};

#endif