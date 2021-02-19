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
