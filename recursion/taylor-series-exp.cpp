// e^x approximated by its Taylor (Maclaurin) series, summed recursively:
// e^x ~= sum_{k=0}^{n} x^k / k!
#include <iostream>

using namespace std;

double expApprox(double x, int n)
{
	static double fac = 1;
	static double sum = 0;
	static double pow = 1;
	if (n == 0)
	{
		return 1;
	}
	sum = expApprox(x, n - 1);
	pow = pow * x;
	fac = fac * n;
	return sum + pow / fac;
}

int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout << "e^" << x << " approx (" << n << " terms): " << expApprox(x, n) << endl;
}
