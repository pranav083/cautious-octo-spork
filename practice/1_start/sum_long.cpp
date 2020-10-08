#include <bits/stdc++.h>

using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int Add(string A, string B);
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string Q, W;
    while(cin>>Q>>W){        
        Add(Q, W);
    }
    return 0;
}

int Add(string A, string B) {
    int a, b;       
    a = A.length();
    b = B.length();
    int max_length = 0;
    if (a>= b) {
        max_length = a;
    }
    else{
        max_length = b;
    }
    if (a < b){
        string tmp;
        tmp = A;
        A = B;
        B = tmp;
        int temp = a;
        a = b;
        b = temp;
    }
    int r[max_length + 1]  = {0};
    if (a >= b){
        int carry = 0;
        int c;
        int i;
        int sum = 0;
        for(i = a; i >a - b; i--){
            sum = carry + ((A[i-1]- '0') + (B[i-(a - b + 1)] - '0'));
            c = sum % 10;
            carry = sum / 10;
            r[i] = c;
        }
        for(i = i ; i >0; i--){
            sum = carry + (A[i-1]- '0');
            c = sum % 10;
            carry = sum / 10;
            r[i] = c;            
        }
        r[i] = carry;
        for(i = 0; i <= max_length ; i++){
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
