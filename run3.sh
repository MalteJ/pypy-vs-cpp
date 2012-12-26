#!/bin/bash
set -x

g++ test3.cpp -o cpp-test3
scalac test3.scala

time pypy test3.py
time ./cpp-test3
time scala test3
