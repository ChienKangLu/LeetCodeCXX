# Setup enviroments

```
./setup_env.sh
```

# Generate a Project Buildsystem

```
./config.sh
```

# Create question

First, create a question by running command below, then the corresponding template of interfaces and implementations will be created and placed to proper folders:
```
./create_question.sh "Remove Duplicates from Sorted Array"
```
Second, declare pure virtual function according to question in `include/questions/[question name]/[question name].hpp`, redefine/override that pure virtual function in `include/questions/[question name]/Solution.hpp` and implement the function in `src/[question name]/Solution1.cpp`. For example:
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
Finally, add all these files to `src/CMakeLists.txt`:

```
set(INTERFACE_FILES 
...
  "${PROJECT_SOURCE_DIR}/include/questions/mergeintervals/MergeIntervals.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/mergeintervals/Solution.hpp"
)

set(IMPLEMENTATION_SOURCES
...
  "mergeintervals/Solution1.cpp"
)
```
About testing, please write your own unit tests in `tests/[question name]/[question name]Test.cpp` and add `add_unittest([question name])` to `tests/CMakeLists.txt` for compilation, For example:

```
...
add_unittest(MergeIntervalsTest)
```

# Build

```
./build.sh
```

# Clean

```
./clean.sh
```

# Test

Notice: Always build before testing

## Run all test suites

```
./test.sh
```

## Run single test suite

```
cd /build
make test MergeTwoSortedListsTest
```

## List test cases in single test suite

```
cd build/tests
./MergeTwoSortedListsTest --gtest_list_tests
```

## Run single test case in test suite (Prefered)

```
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test11
```

## Run a set of test case in test suite (Prefered)

```
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test1*
```

## Log of test

```
Log locates at build/Testing/Temporary/LastTest.log
```