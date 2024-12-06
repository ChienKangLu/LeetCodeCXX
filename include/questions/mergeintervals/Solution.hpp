#ifndef QUESTIONS_MERGE_INTERVALS_SOLUTION_H_
#define QUESTIONS_MERGE_INTERVALS_SOLUTION_H_

#include "MergeIntervals.hpp"

class Solution1 : MergeIntervals {
 public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) override;
};

#endif