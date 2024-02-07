#ifndef QUESTIONS_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
#define QUESTIONS_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_

#include "../Question.hpp"
#include <vector>

// Leetcode 26. Remove Duplicates from Sorted Array
class RemoveDuplicatesFromSortedArray : public Question 
{
public:
  virtual int removeDuplicates(std::vector<int> &nums) = 0;
};

#endif