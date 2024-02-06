#ifndef MERGE_INTERVALS_SOLUTION1_H_
#define MERGE_INTERVALS_SOLUTION1_H_

#include "questions/mergeintervals/Solution.hpp"

vector<vector<int>> Solution1::merge(vector<vector<int>>& intervals) {
    if (intervals.empty() || intervals.size() == 1) {
        return intervals;
    }

    // Sorting intervals by start
    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
        return a.at(0) < b.at(0);
    });

    vector<vector<int>> outputs = { intervals.at(0) };
    for (auto it = next(intervals.begin()); it != end(intervals); ++it) {
        auto start = it->at(0);
        auto end = it->at(1);

        auto last = &outputs.back();
        auto lastEnd = last->at(1);
        if (start <= lastEnd) {
            last->at(1) = max(lastEnd, end);
        } else {
            outputs.push_back(*it);
        }
    }

    return outputs;
}

#endif