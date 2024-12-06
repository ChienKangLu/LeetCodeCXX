#ifndef QUESTIONS_REMOVE_ELEMENT_REMOVE_ELEMENT_H_
#define QUESTIONS_REMOVE_ELEMENT_REMOVE_ELEMENT_H_

#include <vector>

#include "../Question.hpp"

// Leetcode 27. Remove Element
class RemoveElement : public Question {
 public:
  virtual int removeElement(std::vector<int> &nums, int val) = 0;
};

#endif