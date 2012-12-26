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

## run3.sh
```
$ ./run3.sh 
+ g++ test3.cpp -o cpp-test3
+ scalac test3.scala
+ pypy test3.py
looping 500000000 times
counter = 500000000

real	0m9.073s
user	0m9.033s
sys	0m0.016s
+ ./cpp-test3
looping 500000000 times
counter = 500000000

real	0m20.110s
user	0m20.065s
sys	0m0.000s
+ scala test3
looping 500000000 times
counter = 500000000

real	0m1.193s
user	0m1.180s
sys	0m0.052s
```

## fib.sh
```
$ ./fib.sh 
+ g++ fib.cpp -o cpp-fib
+ python fib.py

real	1m32.827s
user	1m32.634s
sys	0m0.004s
+ pypy fib.py

real	0m23.771s
user	0m23.629s
sys	0m0.072s
+ ./cpp-fib

real	0m2.581s
user	0m2.572s
sys	0m0.000s
```
