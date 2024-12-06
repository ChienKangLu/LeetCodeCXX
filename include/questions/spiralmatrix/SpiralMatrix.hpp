#ifndef QUESTIONS_SPIRAL_MATRIX_SPIRAL_MATRIX_H_
#define QUESTIONS_SPIRAL_MATRIX_SPIRAL_MATRIX_H_

#include <vector>

#include "../Question.hpp"

using namespace std;

// Leetcode 54. Spiral Matrix
class SpiralMatrix : public Question {
 public:
  virtual vector<int> spiralOrder(vector<vector<int>>& matrix) = 0;
};

#endif