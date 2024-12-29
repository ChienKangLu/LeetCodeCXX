#include "Question55TestBase.hpp"

typedef testing::Types<Question55::Solution1, Question55::Solution2,
                       Question55::Solution3, Question55::Solution4>
    TestTypes;

class TypeNames {
 public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question55::Solution1>()) {
      return "Solution1";
    } else if (std::is_same<T, Question55::Solution2>()) {
      return "Solution2";
    } else if (std::is_same<T, Question55::Solution3>()) {
      return "Solution3";
    } else if (std::is_same<T, Question55::Solution4>()) {
      return "Solution4";
    } else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question55TestBase, test1, test2);

INSTANTIATE_TYPED_TEST_SUITE_P(Question55Test, Question55TestBase, TestTypes,
                               TypeNames);