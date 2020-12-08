#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 8;
    int j = 0;
    int c;
    try
    {
        if(j == 0){
            throw 1;
        }
        c = i/j;
        cout<<c<<endl;
    }
    catch(const std::exception& e)
    {
        cout<<" division by 0"<<endl;
        std::cerr << e.what() << '\n';
    }
    
}