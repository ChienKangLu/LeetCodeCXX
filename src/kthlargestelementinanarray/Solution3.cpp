#ifndef KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_
#define KTH_LARGEST_ELEMENT_IN_AN_ARRAY_SOLUTION1_H_

#include "questions/kthlargestelementinanarray/Solution.hpp"

int Solution3::findKthLargest(vector<int>& nums, int k) {
    nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());

    return nums[k - 1];
}

#endif