# include<iostream>

using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

void funa(int a);
void funb(int b);

void funa(int a)
{
	if (a > 0)
	{
		cout << "a : " << a << endl;
		funb(a - 1);
	}
}

void funb(int b)
{
	if (b > 0)
	{
		cout << "b : " << b << endl;
		funa(b / 2);
	}
}

int main()
{	OJ
	int c = 105;
	funa(c);
}