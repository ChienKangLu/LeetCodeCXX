#ifndef QUESTIONS_QUESTION169_QUESTION169_H_
#define QUESTIONS_QUESTION169_QUESTION169_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 169. Majority Element
namespace Question169 {
class Question169 : public Question {
 public:
  virtual int majorityElement(vector<int>& nums) = 0;
};
}  // namespace Question169

#endif