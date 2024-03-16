#ifndef ZIGZAG_ITERATOR_SOLUTION1_H_
#define ZIGZAG_ITERATOR_SOLUTION1_H_

#include "questions/zigzagiterator/Solution.hpp"
#include <iostream>

// Use a queue to go through all vectors' iterator and get the current value from the fronted iterator, 
// if iterator is read completely (till the end), then move it out from queue, otherwise push it back to queue again.
Solution2::Solution2(vector<int>& v1, vector<int>& v2): ZigzagIterator(v1, v2) {
    if (!v1.empty()) {
        queue.push(make_pair(v1.begin(), v1.end()));
    }
    if (!v2.empty()) {
        queue.push(make_pair(v2.begin(), v2.end()));
    }
}

int Solution2::next() {
    auto current = queue.front();
    queue.pop();
    int value = *(current.first);
    current.first++;
    if (current.first != current.second) {
        queue.push(current);
    }
    return value;
}

bool Solution2::hasNext() {
    return !queue.empty();
}

#endif