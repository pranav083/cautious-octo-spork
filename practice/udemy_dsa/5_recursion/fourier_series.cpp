/*fourier series using normal technique*/
#include<iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif

double fourier(double x, double n)
{
	static double fac = 1;
	static double sum = 0;
	static double pow = 1;
	if ( n == 0) {
		return 1;
	}
	sum = fourier(x, n - 1);
	pow = pow * x;
	fac = fac * n;
	return sum + pow / fac;

}
int main()
{	OJ
	double x, n, a;
	cin >> x >> n;
	a = fourier(x, n);
	cout << "fourier series : " << a;
}