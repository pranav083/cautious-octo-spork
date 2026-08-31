// e^x approximated by its Taylor series, evaluated via Horner's method: O(n)
// instead of recomputing a power and a factorial at every term.
// e^x ~= 1 + x(1 + x/2(1 + x/3(1 + ... + x/n)))
#include <iostream>

using namespace std;

double expApproxHorner(double x, int k, int n)
{
	if (k > n)
	{
		return 1.0;
	}
	return 1 + (x / k) * expApproxHorner(x, k + 1, n);
}

int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout << "e^" << x << " approx via Horner's method (" << n << " terms): "
	     << expApproxHorner(x, 1, n) << endl;
}
