# distutils: language = c++

# cython function declaration
cdef extern from "src/fib.cpp" namespace "math":
    int fib_cpp(int n)

# python wrapper
def fib(n):
    return fib_cpp(n)

