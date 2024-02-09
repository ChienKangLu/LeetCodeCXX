#include "ReverseLinkedListTestBase.hpp"

typedef testing::Types<Solution1, Solution2> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Solution1>())
    {
      return "Solution1";
    }
    else if (std::is_same<T, Solution2>())
    {
      return "Solution2";
    }
    else
    {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(ReverseLinkedListTestBase, 
                            test1,
                            test2,
                            test3);

INSTANTIATE_TYPED_TEST_SUITE_P(ReverseLinkedListTest, ReverseLinkedListTestBase, TestTypes, TypeNames);