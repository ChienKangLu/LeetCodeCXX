#ifndef QUESTIONS_QUESTION88_SOLUTION_H_
#define QUESTIONS_QUESTION88_SOLUTION_H_

#include "Question88.hpp"

namespace Question88 {
class Solution1 : Question88 {
 public:
  void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2,
             int n) override;
};
}  // namespace Question88

#endif