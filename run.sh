#!/bin/bash
set -x

g++ test.cpp -o cpp-test

time pypy test.py
time ./cpp-test
