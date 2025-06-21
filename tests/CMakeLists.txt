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
add_unittest(MergeIntervalsTest)
add_unittest(LargestNumberTest)
add_unittest(SortColorsTest)
add_unittest(KthLargestElementInAnArrayTest)
add_unittest(MiddleOfTheLinkedListTest)
add_unittest(IntersectionOfTwoLinkedListsTest)
add_unittest(LinkedListCycleTest)
add_unittest(LinkedListCycleIITest)
add_unittest(ReverseLinkedListIITest)
add_unittest(OddEvenLinkedListTest)
add_unittest(SpiralMatrixTest)
add_unittest(Question232Test)
add_unittest(Question150Test)
add_unittest(Question224Test)
add_unittest(Question227Test)
add_unittest(Question88Test)
add_unittest(Question27Test)
add_unittest(Question26Test)
add_unittest(Question80Test)
add_unittest(Question169Test)
add_unittest(Question189Test)
add_unittest(Question121Test)
add_unittest(Question122Test)
add_unittest(Question55Test)
add_unittest(Question45Test)
add_unittest(Question274Test)
add_unittest(Question380Test)
add_unittest(Question238Test)
add_unittest(Question134Test)
add_unittest(Question135Test)
add_unittest(Question13Test)
add_unittest(Question12Test)
add_unittest(Question58Test)
add_unittest(Question14Test)

