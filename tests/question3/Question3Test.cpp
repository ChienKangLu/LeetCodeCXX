#include "Question3TestBase.hpp"

typedef testing::Types<Question3::Solution1, Question3::Solution2> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question3::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question3::Solution2>()) {
      return "Solution2";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question3TestBase, test1, test2, test3, test4);

INSTANTIATE_TYPED_TEST_SUITE_P(Question3Test, Question3TestBase, TestTypes,
                               TypeNames);