#ifndef QUESTION6_SOLUTION1_H_
#define QUESTION6_SOLUTION1_H_

#include <cmath>
#include <vector>

#include "questions/question6/Solution.hpp"

namespace Question6 {

string Solution1::convert(string s, int numRows) {
  if (numRows == 1) {
    return s;
  }

  int n = s.size();

  int sections = ceil(n / (2 * numRows - 2.0));
  int numCols = sections * (numRows - 1);

  vector<vector<char>> matrix(numRows, vector<char>(numCols, ' '));

  int currRow = 0;
  int currCol = 0;
  int i = 0;

  while (i < n) {
    while (currRow < numRows && i < n) {
      matrix[currRow][currCol] = s[i];
      currRow++;
      i++;
    }

    currRow -= 2;
    currCol++;

    while (currRow > 0 && currCol < numCols && i < n) {
      matrix[currRow][currCol] = s[i];
      currRow--;
      currCol++;
      i++;
    }
  }

  string result{""};

  for (const auto &row : matrix) {
    for (const auto &c : row) {
      if (c != ' ') {
        result += c;
      }
    }
  }

  return result;
}
}  // namespace Question6

#endif