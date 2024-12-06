#ifndef QUESTIONS_MERGE_INTERVALS_MERGE_INTERVALS_H_
#define QUESTIONS_MERGE_INTERVALS_MERGE_INTERVALS_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 56. Merge Intervals
class MergeIntervals : public Question {
 public:
  virtual vector<vector<int>> merge(vector<vector<int>>& intervals) = 0;
};

#endif