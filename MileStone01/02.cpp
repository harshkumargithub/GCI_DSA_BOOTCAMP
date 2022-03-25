#include <iostream>
using namespace std;

int findMax(int a, int b)
{
	int z, i, max;

	z = a - b;

	i = (z >> 30) & 1;

	max = a - (i * z);

	return max;
}

int main()
{
	int A = 40, B = 50;

	cout << findMax(A, B);

	return 0;
}
