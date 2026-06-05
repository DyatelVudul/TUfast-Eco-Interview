#!/bin/bash
set -e
cmake -B build
cmake --build build
ctest --test-dir build --verbose
