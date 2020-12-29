#include <iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif

int expo(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n % 2 == 0)
	{
		return expo(a * a, n / 2);
	}
	else
	{
		return a * expo(a * a, (n - 1) / 2);
	}
}

int main()
{	OJ
	int a, b, c;
	cin >> a >> b;
	cout << expo(a, b) << endl;
}