#ifndef QUESTIONS_QUESTION27_QUESTION27_H_
#define QUESTIONS_QUESTION27_QUESTION27_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 27. Remove Element
namespace Question27 {
class Question27 : public Question {
 public:
  virtual int removeElement(vector<int>& nums, int val) = 0;
};
}  // namespace Question27

#endif