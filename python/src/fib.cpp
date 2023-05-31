namespace math {

// Fibonacci number
int _fib(int n) {
	if (n < 2) return n;
	return _fib(n - 1) + _fib(n - 2);
}

}
