# distutils: language = c++

# cython function declaration
cdef extern from "src/fib.cpp" namespace "math":
    int _fib(int n)

# python wrapper
def fib(n):
    return _fib(n)

