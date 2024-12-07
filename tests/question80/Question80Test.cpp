#include "Question80TestBase.hpp"

typedef testing::Types<Question80::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question80::Solution1>()) {
      return "Solution1";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question80TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question80Test, Question80TestBase, TestTypes,
                               TypeNames);