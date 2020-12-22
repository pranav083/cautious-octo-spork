#include<bits/stdc++.h>
using namespace std;

// https://www.codingninjas.com/blog/2020/08/26/lvalue-and-rvalue-references-in-c/
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);



void fun_rev(const int &a)
{
	if (a < 6)
	{
		cout << "hello : " << a << endl;
		fun_rev(a + 1);
	}
}

// one to notice is that if you want to call a fuction by refernce then it is important to
// call it by referce with "const int &x" structure not by "int &x" due to the occurance of multiple referece
// on the same variable.
void fun(const int &b)
{
	int a = b;
	if (a > 0)
	{
		cout << "hello : " << a << endl;
		fun(a - 1);
	}
}
// but same not apply in the single function calling
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
	fun_rev(b);
	swap(b, c);
	cout << b << " " << c << endl;
}