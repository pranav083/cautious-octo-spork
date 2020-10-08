#include<bits/stdc++.h>
using namespace std;
 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main()
{
    OJ;
    int N, i;
    cin >> N;
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];
    
    for(i=0;i<N;i++) sumArray[i]=0;
    
    // Get the numArrayA
    for (i=0; i<N; i++) {
        cin >> numArrayA[i];
    }
    
    // Get the numArrayB
    for (i=0; i<N; i++) {
       cin >> numArrayB[i];
    }
    
    // Write your logic here:
    for (i = 0;i<N;i++) {
       sumArray[i] = numArrayA[i] + numArrayB[i];
       cout<<sumArray[i];

    }
    
    
    
    return 0;
    
}