#ifndef QUESTIONS_QUESTION189_QUESTION189_H_
#define QUESTIONS_QUESTION189_QUESTION189_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 189. Rotate Array
namespace Question189 {
class Question189 : public Question {
 public:
  virtual void rotate(vector<int>& nums, int k) = 0;
};
}  // namespace Question189

#endif