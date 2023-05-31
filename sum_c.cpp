#include <cstdio>
#include <cstdlib>

/*
 * Take integers from the command line and output the sum
 */
int main(int argc, char** argv) {

	// size_t is synonymous type for long int
	if (argc < 2) {
		std::printf("usage: %s [number]+", argv[0]);
		return 1;
	}

	size_t n = argc - 1;  // first argument is the name of the program,
												// which we will ignore
	double* numbers = new double[n];
	for (size_t i = 0; i < n; ++i) {
		numbers[i] = atof(argv[i+1]);
	}

	// compute the sum
	double sum_value = 0.0;
	for (size_t i = 0; i < n; ++i) {
		sum_value += numbers[i];
	}

	// print the sum
	std::printf("sum: %f", sum_value);

	// deallocate memory
	delete [] numbers;
	
	return 0;
}
