#ifndef QUESTIONS_QUESTION88_QUESTION88_H_
#define QUESTIONS_QUESTION88_QUESTION88_H_

#include <vector>

#include "../Question.hpp"

// Leetcode 88. Merge Sorted Array
namespace Question88 {
class Question88 : public Question {
 public:
  virtual void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2,
                     int n) = 0;
};
}  // namespace Question88

#endif