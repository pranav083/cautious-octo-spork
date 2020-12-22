#include<bits/stdc++.h>
using namespace std;
#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
struct Rectangle
{
	int a;
	int b;
	char* c[5];
};

int main()
{
	OJ
	struct Rectangle *r , re;
	// r = &re;
	r = new Rectangle[sizeof(Rectangle)];
	cin >> r->a;
	cin >> r->b;
	// r = new int(sizeof(Rectangle));
	// r->c = "cha";
	cout << "a: " << r->a << " b: " << r->b << " c: " << endl;
	return 0;
}