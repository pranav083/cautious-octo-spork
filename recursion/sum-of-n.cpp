// Sum of the first n natural numbers, computed recursively
#include <iostream>

using namespace std;

int sumOfN(int n)
{
	if (n < 1)
	{
		return 0;
	}
	return n + sumOfN(n - 1);
}

int main()
{
	int a;
	cin >> a;
	cout << sumOfN(a) << endl;
}
