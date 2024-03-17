#ifndef SPIRAL_MATRIX_SOLUTION1_H_
#define SPIRAL_MATRIX_SOLUTION1_H_

#include "questions/spiralmatrix/Solution.hpp"

vector<int> Solution1::spiralOrder(vector<vector<int>>& matrix) {
    if (matrix.empty()) {
        return {};
    }

    const int width = matrix[0].size();
    const int height = matrix.size();
    const int total = width * height;

    int x = 0;
    int y = 0;
    int top = 0;
    int left = 0;
    int right = width - 1;
    int bottom = height - 1;
    int direction = 0;

    vector<int> result;

    while (result.size() != total - 1) {
        if (direction == 0) {
            while (x < right) {
                result.push_back(matrix[y][x++]);
            }
            top++;
        } else if (direction == 1) {
            while (y < bottom) {
                result.push_back(matrix[y++][x]);
            }
            right--;
        } else if (direction == 2) {
            while (x > left) {
                result.push_back(matrix[y][x--]);
            }
            bottom--;
        } else if (direction == 3) {
            while (y > top) {
                result.push_back(matrix[y--][x]);
            }
            left++;
        }

        direction = (direction + 1) % 4;
    }

    result.push_back(matrix[y][x]);

    return result;
}

#endif