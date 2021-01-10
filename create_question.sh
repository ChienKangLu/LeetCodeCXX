#!/usr/bin/env bash

# Description:
#   This script is a helpful tool to save effort about highly repetitive creation task.
#   IIt can generate essential directorys, head files, source files from question name.
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
    local upper_case_wiht_underline_question_name="${upper_case_question_name// /_}"
    echo "Question name (upper case with underline): ${upper_case_wiht_underline_question_name}"

    local include_questions_dir="./include/questions"
    echo "include_questions_dir: ${include_questions_dir}"
    local src_dir="./src"
    echo "src_dir: ${src_dir}"
    local tests_dir="./tests"
    echo "tests_dir: ${src_dir}"

    local question_header_file_name="${no_sapce_question_name}.hpp"
    local solution_header_file_name="Solution.hpp"
    local solution_source_file_name="Solution.cpp"
    local test_source_file_name="test-${lower_case_no_space_question_name}.cpp"

    create_question_header_dir
    create_question_header_file
    create_solution_header_file

    create_solution_source_dir
    create_solution_source_file

    create_test_source_file
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
#ifndef QUESTIONS_${upper_case_wiht_underline_question_name}_${upper_case_wiht_underline_question_name}_H_
#define QUESTIONS_${upper_case_wiht_underline_question_name}_${upper_case_wiht_underline_question_name}_H_

#include \"../Question.hpp\"

class ${no_sapce_question_name} : public Question 
{
public:
  /* Please define interface according to question */
};

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
#ifndef QUESTIONS_${upper_case_wiht_underline_question_name}_SOLUTION_H_
#define QUESTIONS_${upper_case_wiht_underline_question_name}_SOLUTION_H_

#include \"${question_header_file_name}\"

class Solution : ${no_sapce_question_name}
{
public:
  /* Please define interface according to ${no_sapce_question_name} */
};

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
#ifndef ${upper_case_wiht_underline_question_name}_SOLUTION_H_
#define ${upper_case_wiht_underline_question_name}_SOLUTION_H_

#include \"questions/${lower_case_no_space_question_name}/Solution.hpp\"

/* Please implement solution according to \"questions/${lower_case_no_space_question_name}/Solution.hpp\" */

#endif\
"
    echo "${template}"
}

create_test_source_file() {
action "Create test source file (Start)"
    local test_source_file="${tests_dir}/${test_source_file_name}"
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
#include \"gtest/gtest.h\"
#include \"questions/${lower_case_no_space_question_name}/Solution.hpp\"

class ${no_sapce_question_name}Test : public ::testing::Test 
{
protected:
  void SetUp() override {}

  void TearDown() override {}

  Solution soluion;
};

TEST_F(${no_sapce_question_name}Test, test1)
{
  /* Implement verification */
}\
"
    echo "${template}"
}

create "${1}"