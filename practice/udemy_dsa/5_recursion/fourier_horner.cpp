// fourier series using the horner method with the time complexity of O(n)
#include <iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif

double fourier(double x, double n)
{
	static double mul = 1;

	if (n == 0)
	{
		return mul;
	}
	mul = 1 + (x / n * mul);
	mul = fourier(x, n - 1);
	return mul;
}

int main()
{	OJ
	double x, n, o;
	cin >> x >> n;
	o = fourier(x, n);
	cout << "fourier series using the horner method :" << o << endl;
}