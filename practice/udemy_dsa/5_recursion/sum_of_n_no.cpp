# include <iostream>

using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

int funa(int a )
{
	static int sum;
	if (a < 1)
	{
		return sum;
	}
	else
	{
		sum = sum + a;
		funa(a - 1);
	}
}

int main()
{	OJ
	int a ;
	cin >> a;
	cout << funa(a) << endl;

}