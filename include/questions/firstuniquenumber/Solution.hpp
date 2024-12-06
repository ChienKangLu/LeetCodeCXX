#ifndef QUESTIONS_FIRST_UNIQUE_NUMBER_SOLUTION_H_
#define QUESTIONS_FIRST_UNIQUE_NUMBER_SOLUTION_H_

#include <queue>
#include <unordered_map>
#include <unordered_set>

#include "FirstUniqueNumber.hpp"

class Solution1 : FirstUniqueNumber {
 public:
  Solution1(vector<int>& nums);

  int showFirstUnique() override;

  void add(int value) override;

 private:
  unordered_map<int, int> occur;
  queue<int> queue;
};

#endif