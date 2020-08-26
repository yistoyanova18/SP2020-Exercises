#include <iostream>
using namespace std;

bool lastDig(int a, int b, int c)
{
	int aa = a % 10;
	int bb = b % 10;
	int cc = c % 10;
	int d = aa * bb;
	if (d % 10 == cc)
	{
		return true;
	}
	return false;
}

int main()
{
	cout << lastDig(154, 52, 254);
}