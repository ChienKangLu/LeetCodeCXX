#ifndef QUESTIONS_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_
#define QUESTIONS_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 215. Kth Largest Element in an Array
class KthLargestElementInAnArray : public Question {
 public:
  virtual int findKthLargest(vector<int>& nums, int k) = 0;
};

#endif