#ifndef QUESTIONS_LARGEST_NUMBER_LARGEST_NUMBER_H_
#define QUESTIONS_LARGEST_NUMBER_LARGEST_NUMBER_H_

#include <string>
#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 179. Largest Number
class LargestNumber : public Question {
 public:
  virtual string largestNumber(vector<int>& nums) = 0;
};

#endif