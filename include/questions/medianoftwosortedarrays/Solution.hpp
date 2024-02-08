#ifndef QUESTIONS_MEDIAN_OF_TWO_SORTED_ARRAYS_SOLUTION_H_
#define QUESTIONS_MEDIAN_OF_TWO_SORTED_ARRAYS_SOLUTION_H_

#include "MedianOfTwoSortedArrays.hpp"

class Solution1 : MedianOfTwoSortedArrays
{
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) override;
};

#endif