# LeetCodeCXX
This is a project for solving Leetcode problems with C++ and verifying multiple solutions with unit tests (GoogleTest). All solved questions are listed at [include/questions/SOLVED.md](include/questions/SOLVED.md).

## Setup enviroments

Add the following scripts in ~/.bashrc to apply leetcode.sh.
```
source <path-to-LeetCodeCXX>/LeetCodeCXX/leetcode.sh

leetcode_path="<path-to-LeetCodeCXX>/LeetCodeCXX"
```

Setup enviroment by running the following command:
```
leetcode_env_setup
```
That's all, ready to code! :rocket:

## Create question

First, create a question by running command below, then the corresponding template of interfaces and implementations will be created and placed to proper folders:

```
leetcode_question_create 123
```

Second, declare pure virtual function according to question in `include/questions/[questionname]/[QuestionName].hpp`, redefine/override that pure virtual function in `include/questions/[question name]/Solution.hpp` and implement the function in `src/[questionname]/Solution1.cpp`. For example:

```
// include/questions/question123/Question123.hpp
...
class Question123 : public Question {
 public:
  virtual int execute(int input) = 0;
};
...

// include/questions/question123/Solution.hpp
...
class Solution1 : Question123
{
 public:
  int execute(int input) override;
};
...

// src/mergeintervals/Solution.cpp
...
int Solution1::execute(int input) {
    
}
...
```

Then, you can start to write your own unit tests in `tests/[questionname]/[questionName]Test.cpp`. For example, `tests/question123/Question123Test.cpp`.

## Build

```
leetcode_build
```

## Clean

```
leetcode_clean
```

## Test

### Run test

```
leetcode_test_run 123
```

### Run all test suites

```
leetcode_test_all_run
```

### List test cases in single test suite

```
leetcode_test_list 123
```

### Log of test

Log locates at `build/Testing/Temporary/LastTest.log`
