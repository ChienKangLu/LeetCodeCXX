#!/usr/bin/env bash

leetcode_path=""

leetcode_env_setup() {
    cd ${leetcode_path}

    git submodule add https://github.com/google/googletest.git extern/googletest
    git submodule update --init --recursive

    # Checkout to release-1.11.0 branch manully
    # git checkout e2239ee6043f73722e7aa812a459f54a28552929

    # Generate a Project Buildsystem
    cmake -S . -B build
}

leetcode_question_create() {
    cd ${leetcode_path}

    local question_number="$1"

    ./create_question.sh "Question${question_number}"
}

leetcode_build() {
    cd ${leetcode_path}

    # Build a Project 
    cmake --build build
}

leetcode_test_run() {
    cd ${leetcode_path}

    local question_number="$1"

    leetcode_build && ./build/tests/Question${question_number}Test
}

leetcode_test_all_run() {
    cd ${leetcode_path}

    local question_number="$1"

    cmake --build build --target test
}

leetcode_test_list() {
    cd ${leetcode_path}

    local question_number="$1"

    cd build/tests
    ./Question${question_number}Test --gtest_list_tests
}

leetcode_clean() {
    cd ${leetcode_path}

    cmake --build build --target clean
}