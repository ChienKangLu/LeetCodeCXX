add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest")

function(add_unittest TEST_NAME)
  # Get test dir
  string(REPLACE "Test" "" PRE_TEST_DIR ${TEST_NAME})
  string(TOLOWER ${PRE_TEST_DIR} TEST_DIR)

  # Tests need to be added as executables first
  add_executable(${TEST_NAME} 
    ${TEST_DIR}/${TEST_NAME}.cpp 
    ${TEST_DIR}/${TEST_NAME}Base.hpp
  )

  # Should be linked to the main library, as well as the google test library
  target_link_libraries(${TEST_NAME} PRIVATE SolutionLib gtest gmock gtest_main)

  # Automatically add tests with CTest 
  gtest_discover_tests(${TEST_NAME})
endfunction()

add_unittest(MergeTwoSortedListsTest)
add_unittest(RemoveDuplicatesFromSortedArrayTest)
add_unittest(ValidParenthesesTest)
add_unittest(RemoveElementTest)
add_unittest(ImplementStrstrTest)
add_unittest(SearchInsertPositionTest)
add_unittest(SortListTest)
add_unittest(MergeIntervalsTest)
add_unittest(LargestNumberTest)
add_unittest(SortColorsTest)
add_unittest(KthLargestElementInAnArrayTest)
add_unittest(MedianOfTwoSortedArraysTest)
add_unittest(ReverseLinkedListTest)
add_unittest(MiddleOfTheLinkedListTest)
add_unittest(IntersectionOfTwoLinkedListsTest)
add_unittest(LinkedListCycleTest)
add_unittest(LinkedListCycleIITest)
add_unittest(ReverseLinkedListIITest)
add_unittest(OddEvenLinkedListTest)
add_unittest(ImplementStackUsingQueuesTest)
add_unittest(MovingAverageFromDataStreamTest)
add_unittest(ZigzagIteratorTest)
add_unittest(FirstUniqueNumberTest)
add_unittest(SpiralMatrixTest)
add_unittest(MinStackTest)
add_unittest(Question232Test)

