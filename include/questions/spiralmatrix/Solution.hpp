#ifndef QUESTIONS_SPIRAL_MATRIX_SOLUTION_H_
#define QUESTIONS_SPIRAL_MATRIX_SOLUTION_H_

#include "SpiralMatrix.hpp"

class Solution1 : SpiralMatrix
{
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) override;
};

#endif