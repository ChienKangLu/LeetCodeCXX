#ifndef QUESTIONS_QUESTION135_QUESTION135_H_
#define QUESTIONS_QUESTION135_QUESTION135_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 135. Candy
namespace Question135 {
class Question135 : public Question {
 public:
  virtual int candy(vector<int>& ratings) = 0;
};
}  // namespace Question135

#endif