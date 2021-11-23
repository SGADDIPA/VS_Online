#include <iostream>	// Header file for input & output

using namespace std;

// User Defined data type
class my_first_class
{
public:
	// Built-in data type
	int m;
	int mf(int new_val)
	{
		int old = m;

		m = new_val;

		return old;
	}
};

int main(void)
{
	my_first_class mf;

	mf.m = 10;

	cout << mf.mf(20);

	return 0;
}