# PyPy vs. C++ Microbenchmark
```
$ ./run.sh 
+ g++ test.cpp -o cpp-test
+ pypy test.py
[ 1, 2, 3 ]
[ 9, 8, 7 ]
looping 1000000000 times
counter = 1000000000
46
[ -10, 20, -10 ]

real	0m2.677s
user	0m2.656s
sys	0m0.012s
+ ./cpp-test
[ 1, 2, 3 ]
[ 9, 8, 7 ]
looping 1000000000 times
counter = 1000000000
46
[ -10, 20, -10 ]

real	0m23.796s
user	0m23.701s
sys	0m0.040s

```
