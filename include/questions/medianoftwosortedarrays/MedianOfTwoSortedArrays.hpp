#ifndef QUESTIONS_MEDIAN_OF_TWO_SORTED_ARRAYS_MEDIAN_OF_TWO_SORTED_ARRAYS_H_
#define QUESTIONS_MEDIAN_OF_TWO_SORTED_ARRAYS_MEDIAN_OF_TWO_SORTED_ARRAYS_H_

#include "../Question.hpp"
#include <vector>

using namespace std;

// Leetcode 4. Median of Two Sorted Arrays
class MedianOfTwoSortedArrays : public Question 
{
public:
  virtual double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) = 0;
};

#endif