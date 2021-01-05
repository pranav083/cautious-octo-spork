# include<bits/stdc++.h>

using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

void fun(int a);
int main()
{	OJ
	int a;
	cin >> a;
	fun(a);
}

void fun(const int a)
{
	if (a > 0)
	{
		cout << a << " ";
		fun(a - 1);
		fun(a - 1);
	}
}