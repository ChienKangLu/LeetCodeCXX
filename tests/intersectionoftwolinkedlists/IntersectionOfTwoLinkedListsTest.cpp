#include "IntersectionOfTwoLinkedListsTestBase.hpp"

typedef testing::Types<Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Solution1>()) {
      return "Solution1";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(IntersectionOfTwoLinkedListsTestBase, test1, test2,
                            test3, test4);

INSTANTIATE_TYPED_TEST_SUITE_P(IntersectionOfTwoLinkedListsTest,
                               IntersectionOfTwoLinkedListsTestBase, TestTypes,
                               TypeNames);