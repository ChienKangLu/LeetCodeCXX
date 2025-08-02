#ifndef QUESTIONS_QUESTION15_QUESTION15_H_
#define QUESTIONS_QUESTION15_QUESTION15_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 15. 3Sum
namespace Question15 {
class Question15 : public Question {
 public:
  virtual vector<vector<int>> threeSum(vector<int>& nums) = 0;
};
}  // namespace Question15

#endif