#include <iostream>
using namespace std;

struct Rectangle
{
	int a;
	int b;
};

int main()
{
	Rectangle *r = new Rectangle;
	cin >> r->a;
	cin >> r->b;
	cout << "a: " << r->a << " b: " << r->b << endl;
	delete r;
	return 0;
}
