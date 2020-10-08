#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string A, B;
    while(cin>>A>>B){
        Add(A, B);
    }
    return 0;
}

int Add(string A, string B) {
    int a, b;
    a = A.length();
    b = B.length();
    int max_length = 0;
    if (a< b) {
        max_length = b;
        string tmp;
        tmp = A;
        A = B;
        B = tmp;
        int temp = a;
        a = b;
        b = temp;
    }
    else{
        max_length = a;
        int r[max_length + 1]  = {0};
        int carry = 0;
        int c;
        int i;
        int sum = 0;
        for(i = a; i <a - b; i++){
            sum = carry + (A[i-1]- '0') - (B[i-(a - b + 1)] - '0');
            c = sum % 10;
            carry = sum / 10;
            r[i] = c;
        }
        r[i] = carry;
        for(i = 0; i < max_length ; i++){
            if(i == 0 && r[i] == 0){
                continue;
            }
            else{
                cout<<r[i];
            }
        }
        cout<<endl;
    }
}