// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
// Author:	CPP Learner
// Date:	2021-10-21
// Version: NA
// Reference: https://www.youtube.com/watch?v=SGyutdso6_c
//

#include <iostream>
#include <vector>

using namespace std;

// const value for ZERO
const unsigned int ZERO = 0;

// Initial size of vector
const unsigned int N = 40;

typedef unsigned int uint;

inline void sum(int* sum_val, vector<int> d)
{
	*sum_val = ZERO;

	cout << "Size of vector in sum function is:" << d.size() << endl;
	for (uint i = ZERO; i < d.size(); ++i)
	{
		*sum_val += d[i];
	}
}

int main()
{
	// Declare a vector of type int and Size N
	vector<int> data(N);

	// Initialize the vector data
	for (uint i = ZERO; i < N; ++i)
	{
		data[i] = i;
	}

	// Initialize sum value to 0.
	int sum_val = ZERO;

	// Calculate sum of elements in vector data and return 
	// in sum_val.
	sum(&sum_val, data);

	// Print sum of elements onto output window.
	cout << "sum is" << sum_val << endl;

	return 0;
}