#ifndef QUESTIONS_QUESTION11_QUESTION11_H_
#define QUESTIONS_QUESTION11_QUESTION11_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 11. Container With Most Water
namespace Question11 {
class Question11 : public Question {
 public:
  virtual int maxArea(vector<int>& height) = 0;
};
}  // namespace Question11

#endif