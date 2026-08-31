#include<iostream>
using namespace std;

int & test(int & a ){
    cout<<a;
    return a;
}
int main(){
    int x = 20;
    test(x) = 35;
    cout<< x;
}