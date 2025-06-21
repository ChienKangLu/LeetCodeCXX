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
./create_question.sh "Question123"
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
./build.sh
```

## Clean

```
./clean.sh
```

## Test

Notice: Always build before testing

### Build & run test

```
./build.sh && ./build/tests/Question123Test
```

### Run all test suites

```
./test.sh
```

### Run single test suite

```
cd /build
make test Question123Test
```

### List test cases in single test suite

```
cd build/tests
./Question123Test --gtest_list_tests
```

### Log of test

Log locates at `build/Testing/Temporary/LastTest.log`
