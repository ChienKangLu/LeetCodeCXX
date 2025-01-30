#ifndef QUESTIONS_QUESTION238_QUESTION238_H_
#define QUESTIONS_QUESTION238_QUESTION238_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 238. Product of Array Except Self
namespace Question238 {
class Question238 : public Question {
 public:
  virtual vector<int> productExceptSelf(vector<int>& nums) = 0;
};
}  // namespace Question238

#endif