set(INTERFACE_FILES 
  "${PROJECT_SOURCE_DIR}/include/questions/Question.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/validparentheses/ValidParentheses.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/validparentheses/Solution.hpp"
)

set(IMPLEMENTATION_SOURCES
  "validparentheses/Solution.cpp"
)

add_library(SolutionLib
  ${INTERFACE_FILES}
  ${IMPLEMENTATION_SOURCES}
)

# We need this directory, and users of our library will need it too
target_include_directories(SolutionLib PUBLIC 
  "${PROJECT_SOURCE_DIR}/include"
)

# All users of this library will need at least C++11
target_compile_features(SolutionLib PUBLIC cxx_std_11)