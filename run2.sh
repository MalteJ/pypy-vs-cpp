#!/bin/bash
set -x

g++ test2.cpp -o cpp-test2

time pypy test2.py
time ./cpp-test2
