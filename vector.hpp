#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace base {

class vector
{
	public:

		// constructor
		vector (size_t n) {
			rep = new double[n];			
		}

		// destructor
		virtual ~vector () {
			delete [] rep;
		}

		double& operator[](size_t i) {
			return rep[i];
		}

	private:

		double* rep;
};

}

#endif

