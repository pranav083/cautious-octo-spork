// Array declaration in the data structure static and dynamic
#include <iostream>

using namespace std;

#ifndef OJ
#define OJ \
	(void)!freopen("../../../input.txt", "r", stdin); \
	(void)!freopen("../../../error.txt", "w", stderr); \
	(void)!freopen("../../../output.txt", "w", stdout);
#endif
int main()
{   OJ;
	int b[3][2]= {{3,4},{3,3},{2,6}} ;
	int a;
	
	int *c[3];
	c[0] = new int[2]; 
	c[1] = new int[2];
	c[2] = new int[2];
	
	int **d;
	d = new int*[3];
	d[0] = new int[2];
	d[1] = new int[2];
	d[2] = new int[2];
	cin>>a;
	cout<<a;

}