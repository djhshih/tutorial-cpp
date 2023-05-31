namespace math {

// Fibonacci number
int fib_cpp(int n) {
	if (n < 2) return n;
	return fib_cpp(n - 1) + fib_cpp(n - 2);
}

}
