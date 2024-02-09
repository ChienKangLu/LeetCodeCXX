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
  "${PROJECT_SOURCE_DIR}/include/questions/mergeintervals/MergeIntervals.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/mergeintervals/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/largestnumber/LargestNumber.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/largestnumber/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/sortcolors/SortColors.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/sortcolors/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/kthlargestelementinanarray/KthLargestElementInAnArray.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/kthlargestelementinanarray/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/medianoftwosortedarrays/MedianOfTwoSortedArrays.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/medianoftwosortedarrays/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/reverselinkedlist/ReverseLinkedList.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/reverselinkedlist/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/middleofthelinkedlist/MiddleOfTheLinkedList.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/middleofthelinkedlist/Solution.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/intersectionoftwolinkedlists/IntersectionOfTwoLinkedLists.hpp"
  "${PROJECT_SOURCE_DIR}/include/questions/intersectionoftwolinkedlists/Solution.hpp"
)

set(IMPLEMENTATION_SOURCES
  "validparentheses/Solution1.cpp"
  "mergetwosortedlists/Solution1.cpp"
  "removeduplicatesfromsortedarray/Solution1.cpp"
  "removeduplicatesfromsortedarray/Solution2.cpp"
  "removeelement/Solution1.cpp"
  "removeelement/Solution2.cpp"
  "removeelement/Solution3.cpp"
  "implementstrstr/Solution1.cpp"
  "searchinsertposition/Solution1.cpp"
  "searchinsertposition/Solution2.cpp"
  "sortlist/Solution1.cpp"
  "sortlist/Solution2.cpp"
  "mergeintervals/Solution1.cpp"
  "largestnumber/Solution1.cpp"
  "sortcolors/Solution1.cpp"
  "sortcolors/Solution2.cpp"
  "kthlargestelementinanarray/Solution1.cpp"
  "kthlargestelementinanarray/Solution2.cpp"
  "kthlargestelementinanarray/Solution3.cpp"
  "medianoftwosortedarrays/Solution1.cpp"
  "reverselinkedlist/Solution1.cpp"
  "reverselinkedlist/Solution2.cpp"
  "middleofthelinkedlist/Solution1.cpp"
  "intersectionoftwolinkedlists/Solution1.cpp"
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