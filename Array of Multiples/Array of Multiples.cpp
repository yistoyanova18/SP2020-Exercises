#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayOfMultiples(int num, int length) 
{
	vector<int> result;
	for (int i = 1; i <= length; i++)
	{
		result.push_back(num * i);
	}
	return result;
}

int main()
{
	
}

