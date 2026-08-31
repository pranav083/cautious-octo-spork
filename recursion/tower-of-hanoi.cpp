// tower of hanoi using recussion method it has the time complexity if O(2^n)
#include<iostream>

using namespace std;

void TOH(int n, int A, int B, int C)
{
	if (n > 0 )
	{
		TOH(n - 1, A, C, B);
		cout << "move disk :" << A << " to :" << C << " using :" << B << endl;
		TOH(n - 1, B, A, C);
	}
}

int main()
{
	int level;
	cin >> level;
	TOH(level, 1, 2, 3);
}