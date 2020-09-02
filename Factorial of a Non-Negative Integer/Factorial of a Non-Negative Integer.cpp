#include <iostream>
using namespace std;

int factorial(unsigned int z)
{
	if (z == 0)
	{
		return 1;
	}

	int i = z, f = 1;

	while (z / i != z)
	{
		f = f * i;
		i--;
	}

	return f;
}

int main()
{
	cout << factorial(5);
}


