#include <iostream>
#include <string>
#include "vector.hpp"

int main(int argc, char** argv) {

	if (argc < 2) {
		std::cerr << "usage: " << argv[0] << " [number]+" << std::endl;
		return 1;
	}

	// ignore first argument
	size_t n = argc - 1;
	base::vector<double> numbers(n);
	for (size_t i = 0; i < n; ++i) {
		std::string s = argv[i+1];
		numbers[i] = std::stod(s);
	}

	// sum numbers together
	double sum_value = 0.0;
	for (size_t i = 0; i < n; ++i) {
		sum_value += numbers[i];
	}

	// print the result
	std::cout << "sum: " << sum_value << std::endl;

	return 0;
}
