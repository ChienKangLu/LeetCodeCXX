#ifndef QUESTIONS_REMOVE_ELEMENT_REMOVE_ELEMENT_H_
#define QUESTIONS_REMOVE_ELEMENT_REMOVE_ELEMENT_H_

#include "../Question.hpp"
#include <vector>

// Leetcode 27. Remove Element
class RemoveElement : public Question 
{
public:
  virtual int removeElement(std::vector<int> &nums, int val) = 0;
};

#endif