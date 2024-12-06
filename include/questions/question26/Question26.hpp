#ifndef QUESTIONS_QUESTION26_QUESTION26_H_
#define QUESTIONS_QUESTION26_QUESTION26_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 26. Remove Duplicates from Sorted Array
namespace Question26 {
class Question26 : public Question {
 public:
  virtual int removeDuplicates(vector<int>& nums) = 0;
};
}  // namespace Question26

#endif