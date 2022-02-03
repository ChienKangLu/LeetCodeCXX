#!/usr/bin/env bash
git submodule add https://github.com/google/googletest.git extern/googletest
git submodule update --init --recursive

# Checkout to release-1.11.0 branch manully
# git checkout e2239ee6043f73722e7aa812a459f54a28552929