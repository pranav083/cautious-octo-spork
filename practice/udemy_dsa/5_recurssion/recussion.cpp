#include<bits/stdc++.h>
using namespace std;

// https://www.codingninjas.com/blog/2020/08/26/lvalue-and-rvalue-references-in-c/
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);



// void fun_rev(int &a)
// {
// 	if (a < 6)
// 	{
// 		cout << "hello : " << a << endl;
// 		return fun(a + 1);
// 	}
// }

void fun(const int &b)
{
	int a = b;
	if (a > 0)
	{
		cout << "hello : " << a << endl;
		fun(a - 1);
	}
}

void swap(int &b, int &a)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	OJ
	int b , c;
	cin >> b;
	cin >> c;
	// b = &c;
	fun(b);
	cout << b - 7 << endl;
	// fun_rev(b);
	swap(b, c);
	cout << b << " " << c << endl;
}