#ifndef QUESTIONS_SEARCH_INSERT_POSITION_SEARCH_INSERT_POSITION_H_
#define QUESTIONS_SEARCH_INSERT_POSITION_SEARCH_INSERT_POSITION_H_

#include "../Question.hpp"
#include <vector>

class SearchInsertPosition : public Question 
{
public:
  virtual int searchInsert(std::vector<int>& nums, int target) = 0;
};

#endif