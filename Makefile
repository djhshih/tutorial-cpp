all: sum_c sum_cpp sum_cpp11
	

sum_c: sum_c.cpp
	g++ -o sum_c sum_c.cpp

sum_cpp: sum_cpp.cpp
	g++ -o sum_cpp sum_cpp.cpp

sum_cpp11: sum_cpp11.cpp
	g++ -o sum_cpp11 sum_cpp11.cpp

test: sum_c sum_cpp sum_cpp11
	./test.sh ./sum_c
	./test.sh ./sum_cpp
	./test.sh ./sum_cpp11

