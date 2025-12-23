#!/bin/bash
c++ "$1.cpp" -o "$1" -O2 --std=c++20 -Wall -DDEBUG
if [ $# -ge 2 ]; then
  cat "$2" | ./$1
else
  ./$1
fi