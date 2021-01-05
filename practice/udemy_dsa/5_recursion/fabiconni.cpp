// fabinicci series for the impletion in the recussion
#include<iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
int fabnicci(int n)
{
	static int sum = 0 ;
	static int lastSum = 0;
	static int lastSum1 = 0;
	if (n == 0)
	{
		lastSum = 0;
		lastSum1 = 1;
		return 0;
	}
	fabnicci(n - 1);
	sum = lastSum + sum;
	lastSum = lastSum1;
	lastSum1 = sum;
	cout << sum << " " ;
}

int main()
{	OJ
	int m;
	cin >> m;
	fabnicci(m);
}