#include "Question11TestBase.hpp"

typedef testing::Types<Question11::Solution1, Question11::Solution2> TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question11::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question11::Solution2>()) {
      return "Solution2";
    } else {
      return "UnknownSolution";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question11TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question11Test, Question11TestBase, TestTypes,
                               TypeNames);