#ifndef QUESTIONS_QUESTION55_SOLUTION_H_
#define QUESTIONS_QUESTION55_SOLUTION_H_

#include "Question55.hpp"

namespace Question55 {
class Solution1 : Question55 {
 public:
  bool canJump(vector<int>& nums) override;

 private:
  bool canJumpFromPostion(int position, vector<int>& nums);
};

class Solution2 : Question55 {
 public:
  enum Index { GOOD, BAD, UNKNWON };

  bool canJump(vector<int>& nums) override;

 private:
  bool canJumpFromPostion(int position, vector<int>& nums);

  vector<Index> memo;
};

class Solution3 : Question55 {
 public:
  enum Index { GOOD, BAD, UNKNWON };

  bool canJump(vector<int>& nums) override;
};

class Solution4 : Question55 {
 public:
  bool canJump(vector<int>& nums) override;
};
}  // namespace Question55

#endif