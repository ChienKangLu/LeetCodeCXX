#include "Question58TestBase.hpp"

typedef testing::Types<Question58::Solution1, Question58::Solution2> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question58::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question58::Solution2>()) {
      return "Solution2";
    } else {
      return "UnknownType";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question58TestBase, test1, test2, test3);

INSTANTIATE_TYPED_TEST_SUITE_P(Question58Test, Question58TestBase, TestTypes,
                               TypeNames);