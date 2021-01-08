#include<bits/stdc++.h>
using namespace std;

#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);

struct Rectangle
{
	int length;
	int breath;
};

void intilize_length(struct Rectangle *r, int l) {
	r -> length = l;
}
void intilize_breath(struct Rectangle *r, int b) {
	r -> breath = b;
}
int area(struct Rectangle r) {
	return r.length * r.breath;
}
void change_length(struct Rectangle *r, int l) {
	r -> length = l;
}
void change_breath(struct Rectangle *r, int b) {
	r -> breath = b;
}
int main()
{	OJ
	struct Rectangle r;
	int l , b;
	cin >> l >> b;
	intilize_length(&r, l);
	intilize_breath(&r, b);
	cout << area(r) << endl;
	cin >> l;
	change_length(&r, l);
	cout << area(r) << endl;
	return 0;
}