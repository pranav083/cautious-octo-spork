# include <iostream>

using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

int factorial(int a )
{
	static int fact = 1 ;
	if (a < 1)
	{
		return fact;
	}
	else
	{
		// cout << fact << endl;
		fact = fact * a;
		factorial(a - 1);
	}
}

int main()
{	OJ
	int a ;
	cin >> a;
	cout << factorial(a) << endl;

}