set(INTERFACE_FILES 
  "${PROJECT_SOURCE_DIR}/include/questions/common/ListNode.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/Question.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/validparentheses/ValidParentheses.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/validparentheses/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/mergetwosortedlists/MergeTwoSortedLists.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/mergetwosortedlists/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/removeduplicatesfromsortedarray/RemoveDuplicatesFromSortedArray.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/removeduplicatesfromsortedarray/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/removeelement/RemoveElement.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/removeelement/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/implementstrstr/ImplementStrstr.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/implementstrstr/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/searchinsertposition/SearchInsertPosition.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/searchinsertposition/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/sortlist/SortList.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/sortlist/Solution.hpp"
)

set(IMPLEMENTATION_SOURCES
  "validparentheses/Solution1.cpp"
  "mergetwosortedlists/Solution1.cpp"
  "removeduplicatesfromsortedarray/Solution1.cpp"
  "removeduplicatesfromsortedarray/Solution2.cpp"
  "removeelement/Solution1.cpp"
  "removeelement/Solution2.cpp"
  "implementstrstr/Solution1.cpp"
  "searchinsertposition/Solution1.cpp"
  "searchinsertposition/Solution2.cpp"
  "sortlist/Solution1.cpp"
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