#ifndef MEDIAN_OF_TWO_SORTED_ARRAYS_SOLUTION1_H_
#define MEDIAN_OF_TWO_SORTED_ARRAYS_SOLUTION1_H_

#include "questions/medianoftwosortedarrays/Solution.hpp"

// Binary search 
// Tip: Find the the number of elements of nums1 which should be placed at the left part of merged list.
double Solution1::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    const int n1 = nums1.size();
    const int n2 = nums2.size();

    if (n1 > n2) { // make sure the nums1 is the shorter one
        return findMedianSortedArrays(nums2, nums1);
    }

    const int k = (n1 + n2 + 1) / 2;

    int l = 0;
    int r = n1;

    while (l < r) {
        const int m1 = (l + r) / 2;
        const int m2 = k - m1;

        if (nums1[m1] < nums2[m2 - 1]) {
            // m1 is too small
            l = m1 + 1;
        } else {
            // m1 is too large
            r = m1;
        }
    }

    const int m1 = l;
    const int m2 = k - m1;

    const int c1 = max( // find the left median
        m1 <= 0 ? INT_MIN : nums1[m1 - 1], // when m1 is 0, it means non of elements form nums1
        m2 <= 0 ? INT_MIN : nums2[m2 - 1]  // when m2 is 0, it means non of elements form nums2
    );

    if ((n1 + n2) % 2 == 1) {
        return c1; // if n1 + n2 is odd
    }

    const int c2 = min( // find the right median
        m1 >= n1 ? INT_MAX : nums1[m1], // check if m1 is out of bound               
        m2 >= n2 ? INT_MAX : nums2[m2]  // check if m2 is out of bound   
    );

    return (c1 + c2) * 0.5; // if n1 + n2 is even
}

#endif