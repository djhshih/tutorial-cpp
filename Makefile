all: sum_c sum_cpp
	

sum_c: sum_c.cpp
	g++ -o sum_c sum_c.cpp

sum_cpp: sum_cpp.cpp
	g++ -o sum_cpp sum_cpp.cpp
