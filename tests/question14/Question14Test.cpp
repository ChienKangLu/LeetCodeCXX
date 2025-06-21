#include "Question14TestBase.hpp"

typedef testing::Types<Question14::Solution1> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question14::Solution1>()) {
      return "Solution1";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question14TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question14Test, Question14TestBase, TestTypes,
                               TypeNames);