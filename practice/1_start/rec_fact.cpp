#include<iostream>
using namespace std;
int fact(int n) {
    if (n==0) {
        return 1;
    }
    else
        return n*fact(n-1);
}

int main() {
    int i;
    i = 5;
    i = fact(5);
    cout<<i;
    return 0;
}