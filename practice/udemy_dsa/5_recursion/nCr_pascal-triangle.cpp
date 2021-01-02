#include<iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
int nCr(int n, int r)
{
	if (n == r || r == 0)
	{
		return 1;
	}
	return (nCr(n - 1, r - 1) + nCr(n - 1, r));
}
int main()
{	OJ
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);
}