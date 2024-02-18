#include "OddEvenLinkedListTestBase.hpp"

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

REGISTER_TYPED_TEST_SUITE_P(OddEvenLinkedListTestBase, 
                            test1,
                            test2,
                            test3,
                            test4);

INSTANTIATE_TYPED_TEST_SUITE_P(OddEvenLinkedListTest, OddEvenLinkedListTestBase, TestTypes, TypeNames);