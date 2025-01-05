#ifndef QUESTIONS_QUESTION45_QUESTION45_H_
#define QUESTIONS_QUESTION45_QUESTION45_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 45. Jump Game II
namespace Question45 {
class Question45 : public Question {
 public:
  virtual int jump(vector<int>& nums) = 0;
};
}  // namespace Question45

#endif