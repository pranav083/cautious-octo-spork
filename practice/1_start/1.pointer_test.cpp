#include<bits/stdc++.h>
using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout);
    int a[4] = {2, 4,6 ,8 };
    int *p, *q;
    p = &a[2];
    q = &a[1];
    // cout<<p<<endl<<q<<endl;
    // p++;
    // q++;

    cout<<++(++*p)<<endl<<*p<<endl<<*p;
    return 0;
}