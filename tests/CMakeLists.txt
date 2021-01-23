add_subdirectory("${PROJECT_SOURCE_DIR}/extern/googletest" "extern/googletest")

function(add_unittest 
  TESTNAME
)
  # Tests need to be added as executables first
  add_executable(${TESTNAME} ${TESTNAME}.cpp)

  # Should be linked to the main library, as well as the google test library
  target_link_libraries(${TESTNAME} PRIVATE SolutionLib gtest gmock gtest_main)

  # Automatically add tests with CTest 
  gtest_discover_tests(${TESTNAME})
endfunction()

add_unittest(test-validparentheses)
add_unittest(test-mergetwosortedlists)
add_unittest(test-removeduplicatesfromsortedarray)