#include <iostream>
using namespace std;

int index(int i)
{
	return 1 + (i >> 30) - (-i >> 30);
}

void check(int n)
{
	string s[] = { "negative", "zero", "positive" };

	int val = index(n);

	cout << n << " is " << s[val] << endl;
}

int main()
{
	check(30);
	check(-20);
	check(0);
	
	return 0;
}
