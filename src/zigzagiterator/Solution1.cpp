#ifndef ZIGZAG_ITERATOR_SOLUTION1_H_
#define ZIGZAG_ITERATOR_SOLUTION1_H_

#include "questions/zigzagiterator/Solution.hpp"
#include <iostream>

Solution1::Solution1(vector<int>& v1, vector<int>& v2): ZigzagIterator(v1, v2) {
    d1 = std::deque<int>(v1.begin(), v1.end());
    d2 = std::deque<int>(v2.begin(), v2.end());
    if (d1.empty()) {
        current = 1;
    } else {
        current = 0;
    }
}

int Solution1::next() {
    int value;
    if (current == 0) {
        value = d1.front();
        d1.pop_front();
        if (!d2.empty()) {
            current = 1;
        }
    } else {
        value = d2.front();
        d2.pop_front();
        if (!d1.empty()) {
            current = 0;
        }
    }
    return value;
}

bool Solution1::hasNext() {
    return !d1.empty() || !d2.empty();
}

#endif