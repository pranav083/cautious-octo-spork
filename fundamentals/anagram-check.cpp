// For each pair of equal-length strings, print how many single-character
// edits it takes to turn one into an anagram of the other.
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string stra, strb;

	int num;
	cin >> num;
	getline(cin, stra);
	for (int i = 0; i < num; i++) {
		int a = 0;
		int q[26] = {0};
		getline(cin, stra);
		getline(cin, strb);

		if (stra.length() == strb.length()) {
			for (size_t j = 0; j < stra.length(); j++) {
				q[stra[j] - 'a']++;
			}
			for (size_t j = 0; j < strb.length(); j++) {
				q[strb[j] - 'a']--;
			}
			for (int j = 0; j < 26; j++) {
				a += abs(q[j]);
			}
		}
		cout << a << endl;
	}
	return 0;
}
