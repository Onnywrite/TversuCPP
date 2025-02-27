#!/bin/bash

# Run from build directory

LINT_PATHS="../src ../include"

if [ ! -f compile_commands.json ]; then
    echo "Run this script from the build directory"
    exit 1
fi

for lint_path in $LINT_PATHS; do
    ../run-clang-format.py --clang-format-executable clang-format -r $lint_path
    find $lint_path -regextype posix-extended -regex '^.+\.(cpp|hpp)$' | xargs clang-tidy -p . --quiet
done