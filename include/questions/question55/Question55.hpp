#ifndef QUESTIONS_QUESTION55_QUESTION55_H_
#define QUESTIONS_QUESTION55_QUESTION55_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 55. Jump Game
namespace Question55 {
class Question55 : public Question {
 public:
  virtual bool canJump(vector<int>& nums) = 0;
};
}  // namespace Question55

#endif