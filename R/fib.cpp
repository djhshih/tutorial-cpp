#include "Rcpp.h"

// fibonacci number (recursive function)
// [[Rcpp::export]]
int fib(const int n) {
	if (n < 2) return n;
	return fib(n - 1) + fib(n - 2);
}
