#!/usr/bin/env bash

# Description:
#   This script is a helpful tool to save effort about highly repetitive creation task.
#   It can generate essential directorys, head files, source files from question name.
#
# Example:
#   ./create_question.sh "Remove Duplicates from Sorted Array"
# 
# Limitation:
#   Still have to edit CMakeLists.txt manaully to including created dirs and header/source files.

create() {
    local input_question="${1}"
    echo "Input question: ${input_question}"
    local question_name="$(uppercasing_first_letter_of_words "${input_question}")"
    echo "Question name: ${question_name}"
    local no_sapce_question_name=${question_name// /}
    echo "Question name (no sapce): ${no_sapce_question_name}"
    local upper_case_question_name="${question_name^^}"
    echo "Question name (upper case): ${upper_case_question_name}"
    local lower_case_question_name="${question_name,,}"
    echo "Question name (upper case): ${lower_case_question_name}"
    local lower_case_no_space_question_name=${lower_case_question_name// /}
    echo "Question name (lower case and no space): ${lower_case_no_space_question_name}"
    local upper_case_with_underline_question_name="${upper_case_question_name// /_}"
    echo "Question name (upper case with underline): ${upper_case_with_underline_question_name}"

    local include_questions_dir="./include/questions"
    echo "include_questions_dir: ${include_questions_dir}"
    local src_dir="./src"
    echo "src_dir: ${src_dir}"
    local tests_dir="./tests"
    echo "tests_dir: ${src_dir}"

    local question_header_file_name="${no_sapce_question_name}.hpp"
    local solution_header_file_name="Solution.hpp"
    local solution_source_file_name="Solution1.cpp"
    local test_base_source_file_name="${no_sapce_question_name}TestBase.hpp"
    local test_source_file_name="${no_sapce_question_name}Test.cpp"

    create_question_header_dir
    create_question_header_file
    create_solution_header_file
    append_question_header_file_to_cmakelists
    append_solution_header_file_to_cmakelists

    create_solution_source_dir
    create_solution_source_file
    append_solution_source_file_to_cmakelists

    create_test_source_dir
    create_test_base_source_file
    create_test_source_file
    append_test_source_file_to_cmakelists
}

action() {
    echo -e "\e[32m=====${1}=====\e[0m"
}

uppercasing_first_letter_of_words() {
    local words="${1}"
    echo "$(echo "${words}" | awk \
    '
        {
            for(i=1; i<=NF; i++){
                $i=toupper(substr($i,1,1)) substr($i,2)
            }
        }
        
        {
            print
        }
    '
    )"
}

create_question_header_dir() {
    action "Create question header dir (Start)"
    local question_header_dir="${include_questions_dir}/${lower_case_no_space_question_name}"
    if [ -d "${question_header_dir}" ]
    then
        echo "Directory ${question_header_dir} exists." 
    else
        echo "Create directory ${question_header_dir}"
        mkdir "${question_header_dir}"
    fi
    action "Create question dir (End)"
}

create_question_header_file() {
    action "Create question header file (Start)"
    local question_header_file="${include_questions_dir}/${lower_case_no_space_question_name}/${question_header_file_name}"
    if [ -f "${question_header_file}" ]
    then
        echo "File ${question_header_file} exists." 
    else
        echo "Create File ${question_header_file}"
        touch "${question_header_file}"
        echo -n "$(get_question_header_file_template)" > "${question_header_file}"
    fi
    action "Create question header file (End)"
}

get_question_header_file_template() {
    local template="\
#ifndef QUESTIONS_${upper_case_with_underline_question_name}_${upper_case_with_underline_question_name}_H_
#define QUESTIONS_${upper_case_with_underline_question_name}_${upper_case_with_underline_question_name}_H_

#include \"../Question.hpp\"

namespace ${no_sapce_question_name}
{
class ${no_sapce_question_name} : public Question 
{
public:
  /* Please declare pure virtual function according to question */
};
}  // namespace ${no_sapce_question_name}

#endif\
"
    echo "${template}"
}

create_solution_header_file() {
    action "Create solution header file (Start)"
    local solution_header_file="${include_questions_dir}/${lower_case_no_space_question_name}/${solution_header_file_name}"
    if [ -f "${solution_header_file}" ]
    then
        echo "File ${solution_header_file} exists." 
    else
        echo "Create File ${solution_header_file}"
        touch "${solution_header_file}"
        echo -n "$(get_solution_header_file_template)" > "${solution_header_file}"
    fi
    action "Create solution header file (End)"
}

get_solution_header_file_template() {
    local template="\
#ifndef QUESTIONS_${upper_case_with_underline_question_name}_SOLUTION_H_
#define QUESTIONS_${upper_case_with_underline_question_name}_SOLUTION_H_

#include \"${question_header_file_name}\"

namespace ${no_sapce_question_name}
{
class Solution1 : ${no_sapce_question_name}
{
public:
  /* Please redefine/override pure virtual function from ${no_sapce_question_name} */
};
}  // namespace ${no_sapce_question_name}

#endif
"
    echo "${template}"
}

create_solution_source_dir() {
    action "Create solution source dir (Start)"
    local question_source_dir="${src_dir}/${lower_case_no_space_question_name}"
    if [ -d "${question_source_dir}" ]
    then
        echo "Directory ${question_source_dir} exists." 
    else
        echo "Create directory ${question_source_dir}"
        mkdir "${question_source_dir}"
    fi
    action "Create solution source dir (End)"
}

create_solution_source_file() {
    action "Create solution source file (Start)"
    local solution_source_file="${src_dir}/${lower_case_no_space_question_name}/${solution_source_file_name}"
    if [ -f "${solution_source_file}" ]
    then
        echo "File ${solution_source_file} exists." 
    else
        echo "Create File ${solution_source_file}"
        touch "${solution_source_file}"
        echo -n "$(get_solution_source_file_template)" > "${solution_source_file}"
    fi
    action "Create solution source file (End)"
}

get_solution_source_file_template() {
    local template="\
#ifndef ${upper_case_with_underline_question_name}_SOLUTION1_H_
#define ${upper_case_with_underline_question_name}_SOLUTION1_H_

#include \"questions/${lower_case_no_space_question_name}/Solution.hpp\"

namespace ${no_sapce_question_name}
{
/* Please implement solution according to \"questions/${lower_case_no_space_question_name}/Solution.hpp\" */
}  // namespace ${no_sapce_question_name}

#endif\
"
    echo "${template}"
}

create_test_source_dir() {
    action "Create test source dir (Start)"
    local test_source_dir="${tests_dir}/${lower_case_no_space_question_name}"
    if [ -d "${test_source_dir}" ]
    then
        echo "Directory ${test_source_dir} exists." 
    else
        echo "Create directory ${test_source_dir}"
        mkdir "${test_source_dir}"
    fi
    action "Create test source dir (End)"
}

create_test_base_source_file() {
    action "Create test base source file (Start)"
    local test_base_source_file="${tests_dir}/${lower_case_no_space_question_name}/${test_base_source_file_name}"
    if [ -f "${test_base_source_file}" ]
    then
        echo "File ${test_base_source_file} exists." 
    else
        echo "Create File ${test_base_source_file}"
        touch "${test_base_source_file}"
        echo -n "$(get_test_base_source_file_template)" > "${test_base_source_file}"
    fi
    action "Create test base source file (End)"
}

get_test_base_source_file_template() {
    local template="\
#include \"gtest/gtest.h\"
#include \"questions/${lower_case_no_space_question_name}/Solution.hpp\"

template <typename T>
class ${no_sapce_question_name}TestBase : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  T solution = T();
};

TYPED_TEST_SUITE_P(${no_sapce_question_name}TestBase);

TYPED_TEST_P(${no_sapce_question_name}TestBase, test1)
{
    // GIVEN
    
    // WHEN

    // THEN
}\
"
    echo "${template}"
}

create_test_source_file() {
action "Create test source file (Start)"
    local test_source_file="${tests_dir}/${lower_case_no_space_question_name}/${test_source_file_name}"
    if [ -f "${test_source_file}" ]
    then
        echo "File ${test_source_file} exists." 
    else
        echo "Create File ${test_source_file}"
        touch "${test_source_file}"
        echo -n "$(get_test_source_file_template)" > "${test_source_file}"
    fi
    action "Create test source file (End)"
}

get_test_source_file_template() {
    local template="\
#include \"${test_base_source_file_name}\"

typedef testing::Types<${no_sapce_question_name}::Solution1> TestTypes;

class TypeNames {
public:
  template <typename T>
  static std::string GetName(int) {
    if (std::is_same<T, ${no_sapce_question_name}::Solution1>())
    {
      return \"Solution1\";
    }
  }
};

REGISTER_TYPED_TEST_SUITE_P(${no_sapce_question_name}TestBase, 
                            test1);

INSTANTIATE_TYPED_TEST_SUITE_P(${no_sapce_question_name}Test, ${no_sapce_question_name}TestBase, TestTypes, TypeNames);\
"
    echo "${template}"
}

append_question_header_file_to_cmakelists() {
    action "Append question header file to cmakelists (Start)"
    local file="./src/CMakeLists.txt"
    local anchor="set\(INTERFACE_FILES "
    local target="\)"
    local insert="\ \ \"${include_questions_dir}/${lower_case_no_space_question_name}/${question_header_file_name}\""
    insert="${insert/./\$\{PROJECT_SOURCE_DIR\}}"
    echo "Append ${insert} to ${file}"
    append_to_cmakelists_by_anchor "${file}" "${anchor}" "${target}" "${insert}"
    action "Append question header file to cmakelists (End)"
}

append_solution_header_file_to_cmakelists() {
    action "Append solution header file to cmakelists (Start)"
    local file="./src/CMakeLists.txt"
    local anchor="set\(INTERFACE_FILES "
    local target="\)"
    local insert="\ \ \"${include_questions_dir}/${lower_case_no_space_question_name}/${solution_header_file_name}\""
    insert="${insert/./\$\{PROJECT_SOURCE_DIR\}}"
    echo "Append ${insert} to ${file}"
    append_to_cmakelists_by_anchor "${file}" "${anchor}" "${target}" "${insert}"
    action "Append solution header file to cmakelists (End)"
}

append_solution_source_file_to_cmakelists() {
    action "Append solution source file to cmakelists (Start)"
    local file="./src/CMakeLists.txt"
    local anchor="set\(IMPLEMENTATION_SOURCES"
    local target="\)"
    local insert="\ \ \"${lower_case_no_space_question_name}/${solution_source_file_name}\""
    echo "Append ${insert} to ${file}"
    append_to_cmakelists_by_anchor "${file}" "${anchor}" "${target}" "${insert}"
    action "Append solution source file to cmakelists (End)"
}

append_test_source_file_to_cmakelists() {
    action "Append test source file to cmakelists (Start)"
    local file="./tests/CMakeLists.txt"
    local target="add_unittest\("
    local insert="add_unittest(${no_sapce_question_name}Test)"
    echo "Append ${insert} to ${file}"
    append_to_cmakelists_after_last_target "${file}" "${target}" "${insert}"
    action "Append test source file to cmakelists (End)"
}

append_to_cmakelists_by_anchor() {
    local file="${1}"
    local anchor="${2}"
    local target="${3}"
    local insert="${4}"
    if [ $(grep -c "${insert}" "${file}") -ge 1 ]
    then
        echo "${insert} exists."
    else
        local line_number="$(line_number_of_target_after_anchor "${file}" "${anchor}" "${target}")"
        insert_before_line_number "${file}" "${line_number}" "${insert}"
    fi
}

insert_before_line_number() {
    local file="${1}"
    local line_number=$((${2} - 1))
    local insert="${3}"

    insert_line_number "${file}" "${line_number}" "${insert}"
}

insert_line_number() {
    local file="${1}"
    local line_number="${2}"
    local insert="${3}"

    if [ "$(uname)" == "Darwin" ]
    then
        line_number=$((${line_number} + 1))
        mac_insert_line_number "${file}" "${line_number}" "${insert}"
    else
        sed -i ''"${line_number}"' a '"${insert}"'' "${file}"
    fi
}

mac_insert_line_number() {
    local file="${1}"
    local line_number="${2}"
    local insert="${3}"
    
    sed ''"${line_number}"'i\
'"${insert}"'
' "${file}" > "${file}".temp
    rm "${file}"
    mv "${file}".temp "${file}"
}

line_number_of_target_after_anchor() {
    local file="${1}"
    local anchor="${2}"
    local target="${3}"
    echo "$(awk \
    '
        BEGIN {
            isAnchorFound = 0;
            lineNumberOfTarget = 0;
        }
        {
            if (!isAnchorFound && $0 ~ /'"${anchor}"'/) {
                isAnchorFound = 1;
            }
            if (!lineNumberOfTarget && isAnchorFound && $0 ~ /'"${target}"'/) {
                lineNumberOfTarget = NR;
            }
        }
        END {
            print(lineNumberOfTarget)
        }
    ' \
    "${file}"
    )"
}

append_to_cmakelists_after_last_target() {
    local file="${1}"
    local target="${2}"
    local insert="${3}"
    if [ $(grep -c "${insert}" "${file}") -ge 1 ]
    then
        echo "${insert} exists."
    else
        local line_number="$(line_number_of_last_target "${file}" "${target}")"
        insert_after_line_number "${file}" "${line_number}" "${insert}"
    fi
}

line_number_of_last_target() {
    local file="${1}"
    local target="${2}"
    echo "$(awk \
    '
        BEGIN {
            lineNumberOfTarget = 0;
        }
        {
            if ($0 ~ /'"${target}"'/) {
                lineNumberOfTarget = NR;
            }
        }
        END {
            print(lineNumberOfTarget)
        }
    ' \
    "${file}"
    )"
}

insert_after_line_number() {
    local file="${1}"
    local line_number="${2}"
    local insert="${3}"
    
    insert_line_number "${file}" "${line_number}" "${insert}"
}

create "${1}"