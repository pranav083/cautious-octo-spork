#include<bits/stdc++.h>
using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

int arrays(int a[], int &num) {
	for (int i = 0; i < num; i++) {
		cin >> a[i];
		cout << a[i] << endl;
	}
	cout << "num in function: " << num << endl;
}

struct Rectangle
{
	int length;
	int breath;
};

void fun(struct Rectangle *p)
{
	cin >> p -> length;
	cin >> p -> breath;
	cout << "length " << p -> length << " , breath " << p -> breath << endl;
}

int main()
{	OJ
	struct Rectangle t;
	fun(&t);
	int n;
	cout << "passing array through pointer" << endl;
	cin >> n;
	int a[n];
	cout << n;
	arrays(a, n);
	cout << n;
	return 0;
}