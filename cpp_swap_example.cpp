// Example for Swap with references and overloading
// Author:	CPP Learner
// Date:	2021-10-21
// Version: NA
//

#include <iostream>	// Header file for input & output

using namespace std;
typedef unsigned int uint;
typedef unsigned char uchar;

void c_swap(uint* first, uint* second)
{
	// Check for valid pointer
	if ((NULL == first) || (NULL == second))
	{
		return;
	}

	uint temp = *first;
	*first = *second;
	*second = temp;
}

void cpp_swap(uint& first, uint& second)
{
	cout << "Inside uint swap function: " << endl;
	uint temp = first;
	first = second;
	second = temp;
}

void cpp_swap(uchar& first, uchar& second)
{
	cout << "Inside uchar swap function: " << endl;
	uint temp = first;
	first = second;
	second = temp;
}

int main(void)
{
	uint v1 = 10; uint  v2 = 20;

	cout << "Before Value1 = " << v1 << " Value2 = " << v2 << endl;

	//c_swap(&v1, &v2);
	cpp_swap(v1, v2);

	cout << "After  Value1 = " << v1 << " Value2 = " << v2 << endl;

	uchar a = 'a', b = 'b';
	cout << "Before [a] = " << a << " [b] = " << b << endl;

	cpp_swap(a, b);

	cout << "After  [a] = " << a << " [b] = " << b << endl;

	return 0;
}