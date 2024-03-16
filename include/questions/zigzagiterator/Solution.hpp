#ifndef QUESTIONS_ZIGZAG_ITERATOR_SOLUTION_H_
#define QUESTIONS_ZIGZAG_ITERATOR_SOLUTION_H_

#include "ZigzagIterator.hpp"
#include <deque>
#include <queue>
#include <utility>

class Solution1 : ZigzagIterator
{
public:
  Solution1(vector<int>& v1, vector<int>& v2);

  int next() override;

  bool hasNext() override;

private:
  std::deque<int> d1;
  std::deque<int> d2;
  int current;
};

class Solution2 : ZigzagIterator
{
public:
  Solution2(vector<int>& v1, vector<int>& v2);

  int next() override;

  bool hasNext() override;

private:
  queue<pair<vector<int>::iterator, vector<int>::iterator>> queue;
};

#endif