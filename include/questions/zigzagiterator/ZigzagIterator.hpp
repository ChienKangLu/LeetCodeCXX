#ifndef QUESTIONS_ZIGZAG_ITERATOR_ZIGZAG_ITERATOR_H_
#define QUESTIONS_ZIGZAG_ITERATOR_ZIGZAG_ITERATOR_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

/**
 * Leetcode 281. Zigzag Iterator
 *
 * Given two 1d vectors, implement an iterator to return their elements
 * alternately Example: Input: v1 = [1, 2] v2 = [3, 4, 5, 6] Output = [1, 3, 2,
 * 4, 5, 6] Explanation: By calling next repeatly until hasNext returns false.
 * The order of elements returned by next should be [1, 3, 2, 4, 5, 6]
 *
 * Follow ups:
 * What if you are given k 1d vectors? How well can your code be extended to
 * such cases?
 */

class ZigzagIterator : public Question {
 public:
  ZigzagIterator(vector<int>& v1, vector<int>& v2) : v1(v1), v2(v2){};

  virtual int next() = 0;

  virtual bool hasNext() = 0;

 protected:
  vector<int> v1;
  vector<int> v2;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */

#endif