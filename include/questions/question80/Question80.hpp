#ifndef QUESTIONS_QUESTION80_QUESTION80_H_
#define QUESTIONS_QUESTION80_QUESTION80_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 80. Remove Duplicates from Sorted Array II
namespace Question80 {
class Question80 : public Question {
 public:
  virtual int removeDuplicates(vector<int>& nums) = 0;
};
}  // namespace Question80

#endif