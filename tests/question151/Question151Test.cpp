#include "Question151TestBase.hpp"

typedef testing::Types<Question151::Solution1, Question151::Solution2>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question151::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question151::Solution1>()) {
      return "Solution2";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question151TestBase, test1, test2, test3, test4,
                            test5);

INSTANTIATE_TYPED_TEST_SUITE_P(Question151Test, Question151TestBase, TestTypes,
                               TypeNames);