#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("../input.txt", "r", stdin); \
    freopen("../output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#include<bits/stdc++.h>
using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main()
{
    OJ;
	string stra, strb;

	int num, n;
	cin>>num;
	getline(cin, stra);
	for(int i = 0; i < num; i++) {
		// char stra[10000],strb[10000];
		int a = 0;
		int q[26]= {0};
		getline(cin, stra);
		getline(cin, strb);

		if (stra.length() == strb.length()){
		// cout<<"hello";
		for (int j = 0; j<stra.length() ;j++) {
			q[stra[j]- 'a']++;
		}
		for (int j = 0; j< strb.length(); j++) {
			q[strb[j] - 'a']--;
		}
		for( int j = 0; j<26; j++)	{
			a +=abs(q[j]);
		}
		}
		cout<<a<<endl;

	}
	return 0;
}