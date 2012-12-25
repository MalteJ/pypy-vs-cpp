# PyPy vs. C++ Microbenchmark
## run.sh
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

## run2.sh
```
$ ./run2.sh 
+ g++ test2.cpp -o cpp-test2
+ pypy test2.py
looping 50000000 times
counter = 50000000
[ 49999999, 99999998, 149999997 ]
[ 449999991, 399999992, 349999993 ]
114999995400000046
[ -24999999000000010, 49999998000000020, -24999999000000010 ]

real	0m7.731s
user	0m6.600s
sys	0m1.076s
+ ./cpp-test2
looping 50000000 times
counter = 50000000

real	0m2.427s
user	0m2.348s
sys	0m0.068s
```
