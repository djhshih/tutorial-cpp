library(Rcpp)

sourceCpp("fib.cpp")

system.time( print(fib(30)) )
