#ifndef QUESTIONS_QUESTION167_QUESTION167_H_
#define QUESTIONS_QUESTION167_QUESTION167_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 167. Two Sum II - Input Array Is Sorted
namespace Question167 {
class Question167 : public Question {
 public:
  virtual vector<int> twoSum(vector<int>& numbers, int target) = 0;
};
}  // namespace Question167

#endif