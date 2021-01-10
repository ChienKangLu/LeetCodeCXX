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

## Run one test suite
cd /build
make test test-mergetwosortedlists

## List test cases in one test suite
cd build/tests
./test-mergetwosortedlists --gtest_list_tests

## Run one test case in test suite
cd build/tests
./test-mergetwosortedlists --gtest_filter=MergeTwoSortedListsTest.test1

## Log of test
Log locates at build/Testing/Temporary/LastTest.log