# LeetCodeCXX
This is a project for solving Leetcode problems with C++ and verifying multiple solutions with unit tests (GoogleTest). All solved questions are listed at [include/questions/SOLVED.md](include/questions/SOLVED.md).

## Setup enviroments

```
./setup_env.sh
./config.sh
```

## Create question

First, create a question by running command below, then the corresponding template of interfaces and implementations will be created and placed to proper folders:

```
./create_question.sh "Remove Duplicates from Sorted Array"
```

Second, declare pure virtual function according to question in `include/questions/[questionname]/[QuestionName].hpp`, redefine/override that pure virtual function in `include/questions/[question name]/Solution.hpp` and implement the function in `src/[questionname]/Solution1.cpp`. For example:

```
// include/questions/mergeintervals/MergeIntervals.hpp
...
class MergeIntervals : public Question 
{
public:
  virtual vector<vector<int>> merge(vector<vector<int>>& intervals) = 0;
};
...

// include/questions/mergeintervals/Solution.hpp
...
class Solution1 : MergeIntervals
{
public:
  vector<vector<int>> merge(vector<vector<int>>& intervals) override;
};
...

// src/mergeintervals/Solution.cpp
...
vector<vector<int>> Solution1::merge(vector<vector<int>>& intervals) {
    
}
...
```

Then, you can start to write your own unit tests in `tests/[questionname]/[questionName]Test.cpp`. For example, `tests/mergeintervals/MergeIntervalsTest.cpp`.

## Build

```
./build.sh
```

## Clean

```
./clean.sh
```

## Test

Notice: Always build before testing

### Run all test suites

```
./test.sh
```

### Run single test suite

```
cd /build
make test MergeTwoSortedListsTest
```

### List test cases in single test suite

```
cd build/tests
./MergeTwoSortedListsTest --gtest_list_tests
```

### Run single test case in test suite (Prefered)

```
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test11
```

### Run a set of test case in test suite (Prefered)

```
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test1*
```

### Log of test

Log locates at `build/Testing/Temporary/LastTest.log`