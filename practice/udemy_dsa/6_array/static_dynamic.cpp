#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    // freopen("../input.txt", "r", stdin); 
    // freopen("../output.txt", "w", stdout);
    unsigned int x[4][3] ={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} }; 

    printf("%u,%u, %u \n", x+3, *(x+3),*(x+2)+3);
    printf("%u \n",*(x+2)+3);
    printf("%u /n",*(x+2));
    return 0;
}