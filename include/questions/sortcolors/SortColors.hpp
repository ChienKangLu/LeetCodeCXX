#ifndef QUESTIONS_SORT_COLORS_SORT_COLORS_H_
#define QUESTIONS_SORT_COLORS_SORT_COLORS_H_

#include <vector>

#include "../Question.hpp"

// Leetcode 75. Sort Colors
class SortColors : public Question {
 public:
  virtual void sortColors(std::vector<int>& nums) = 0;
};

#endif