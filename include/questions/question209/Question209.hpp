#ifndef QUESTIONS_QUESTION209_QUESTION209_H_
#define QUESTIONS_QUESTION209_QUESTION209_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 209. Minimum Size Subarray Sum
namespace Question209 {
class Question209 : public Question {
 public:
  virtual int minSubArrayLen(int target, vector<int>& nums) = 0;
};
}  // namespace Question209

#endif