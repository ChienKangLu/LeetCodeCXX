# Setup enviroments
./setup_env.sh

# Generate a Project Buildsystem
./config.sh

# Build
./build.sh

# Clean
./clean.sh

# Test
Notice: Always build before testing

## Run all test suites
./test.sh

## Run single test suite
cd /build
make test MergeTwoSortedListsTest

## List test cases in single test suite
cd build/tests
./MergeTwoSortedListsTest --gtest_list_tests

## Run single test case in test suite (Prefered)
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test11

## Run a set of test case in test suite (Prefered)
cd build/tests
./MergeTwoSortedListsTest --gtest_filter=MergeTwoSortedListsTest/MergeTwoSortedListsTestBase/Solution1.test1*

## Log of test
Log locates at build/Testing/Temporary/LastTest.log

# Create question
./create_question.sh "Remove Duplicates from Sorted Array"