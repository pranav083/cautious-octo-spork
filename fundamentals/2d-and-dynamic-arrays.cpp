// Static 2D arrays vs. arrays of dynamically-allocated rows
#include <iostream>

using namespace std;

int main()
{
	int b[3][2] = {{3, 4}, {3, 3}, {2, 6}};
	cout << "static 2D array:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << b[i][0] << " " << b[i][1] << endl;
	}

	int *c[3];
	for (int i = 0; i < 3; i++) {
		c[i] = new int[2];
		c[i][0] = b[i][0];
		c[i][1] = b[i][1];
	}

	cout << "array of dynamically-allocated rows:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << c[i][0] << " " << c[i][1] << endl;
		delete[] c[i];
	}

	return 0;
}
