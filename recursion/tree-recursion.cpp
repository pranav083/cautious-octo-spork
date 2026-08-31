#include <iostream>

using namespace std;

void fun(int a);
int main()
{
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