#ifndef QUESTIONS_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION_H_
#define QUESTIONS_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION_H_

#include "KthLargestElementInAnArray.hpp"

class Solution1 : KthLargestElementInAnArray {
 public:
  int findKthLargest(vector<int>& nums, int k) override;
};

class Solution2 : KthLargestElementInAnArray {
 public:
  int findKthLargest(vector<int>& nums, int k) override;

 private:
  int partition(vector<int>& nums, int start, int end, int k);
};

class Solution3 : KthLargestElementInAnArray {
 public:
  int findKthLargest(vector<int>& nums, int k) override;
};

#endif