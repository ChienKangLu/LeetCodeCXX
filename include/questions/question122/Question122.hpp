#ifndef QUESTIONS_QUESTION122_QUESTION122_H_
#define QUESTIONS_QUESTION122_QUESTION122_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 122. Best Time to Buy and Sell Stock II
namespace Question122 {
class Question122 : public Question {
 public:
  virtual int maxProfit(vector<int>& prices) = 0;
};
}  // namespace Question122

#endif