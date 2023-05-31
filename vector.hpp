#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace base {

template <typename T>
class vector
{
	public:

		// constructor
		vector (size_t n) {
			rep = new T[n];
		}

		// destructor
		virtual ~vector () {
			delete [] rep;
		}

		T& operator[](size_t i) {
			return rep[i];
		}

	private:

		T* rep;
};

}

#endif

