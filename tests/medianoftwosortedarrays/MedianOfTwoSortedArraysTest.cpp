#include "MedianOfTwoSortedArraysTestBase.hpp"

typedef testing::Types<Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Solution1>())
    {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(MedianOfTwoSortedArraysTestBase, 
                            test1,
                            test2,
                            test3,
                            test4,
                            test5,
                            test6,
                            test7,
                            test8,
                            test9,
                            test10,                          
                            test11,                          
                            test12,                          
                            test13,                          
                            test14,                          
                            test15,                          
                            test16,                          
                            test17);

INSTANTIATE_TYPED_TEST_SUITE_P(MedianOfTwoSortedArraysTest, MedianOfTwoSortedArraysTestBase, TestTypes, TypeNames);