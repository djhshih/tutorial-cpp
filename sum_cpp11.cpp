#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {

	if (argc < 2) {
		std::cerr << "usage: " << argv[0] << " [number]+" << std::endl;
		return 1;
	}

	// ignore first argument
	size_t n = argc - 1;
	std::vector<double> numbers(n);
	std::vector<double>::iterator it = numbers.begin();
	char** argv_it = &(argv[1]);
	for (it = numbers.begin(); it != numbers.end(); ++it, ++argv_it) {
		std::string s = (*argv_it);
		*it = std::stod(s);
	}

	// sum numbers together
	double sum_value = 0.0;
	std::vector<double>::const_iterator cit;
	for (cit = numbers.cbegin(); cit != numbers.cend(); ++cit) {
		sum_value += (*cit);
	}

	// print the result
	std::cout << "sum: " << sum_value << std::endl;

	return 0;
}
