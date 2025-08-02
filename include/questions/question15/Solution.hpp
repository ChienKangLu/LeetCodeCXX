#ifndef QUESTIONS_QUESTION15_SOLUTION_H_
#define QUESTIONS_QUESTION15_SOLUTION_H_

#include "Question15.hpp"

namespace Question15 {
class Solution1 : Question15 {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) override;

 private:
  void findTwoSum(vector<int>& nums, int i, vector<vector<int>>& result);
};

class Solution2 : Question15 {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) override;

 private:
  void findTwoSum(vector<int>& nums, int i, vector<vector<int>>& result);
};

class Solution3 : Question15 {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) override;
};
}  // namespace Question15

#endif