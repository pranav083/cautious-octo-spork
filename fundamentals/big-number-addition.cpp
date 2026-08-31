// Addition of two arbitrarily large non-negative integers, given as decimal
// strings since they may not fit in a built-in integer type.
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string addBigNumbers(string a, string b)
{
	if (a.length() < b.length()) {
		swap(a, b);
	}
	string result;
	int carry = 0;
	int i = static_cast<int>(a.length()) - 1;
	int j = static_cast<int>(b.length()) - 1;
	for (; i >= 0; i--, j--) {
		int digitA = a[i] - '0';
		int digitB = (j >= 0) ? b[j] - '0' : 0;
		int sum = digitA + digitB + carry;
		carry = sum / 10;
		result.push_back(static_cast<char>('0' + sum % 10));
	}
	if (carry) {
		result.push_back(static_cast<char>('0' + carry));
	}
	reverse(result.begin(), result.end());
	return result;
}

int main()
{
	string a, b;
	while (cin >> a >> b) {
		cout << addBigNumbers(a, b) << endl;
	}
	return 0;
}
