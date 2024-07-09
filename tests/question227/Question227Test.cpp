#include "Question227TestBase.hpp"

typedef testing::Types<Question227::Solution1, Question227::Solution2> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, Question227::Solution1>())
    {
      return "Solution1";
    }
    else if (std::is_same<T, Question227::Solution2>())
    {
      return "Solution2";
    }
    else {
      return "";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(Question227TestBase, 
                            test1,
                            test2,
                            test3,
                            test4,
                            test5,
                            test6,
                            test7);

INSTANTIATE_TYPED_TEST_SUITE_P(Question227Test, Question227TestBase, TestTypes, TypeNames);