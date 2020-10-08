// Your First C++ Program

#include <iostream>
void fct(int n);
using namespace std;
int main() {
    cout << "Hello World!"<<endl; // TODO hiwuerguergv
    fct(3);
    return 0;
}   

void fct(int n) {
    if (n<1) {
        return;
    }
    else {
        cout<<n<<" ";
        fct(n-1);
        cout<<n<<" ";
    }
}
