#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int i = 8;
    int j = 0;
    int c;
    try
    {
        if(j == 0){
            throw runtime_error("division by zero");
        }
        c = i/j;
        cout<<c<<endl;
    }
    catch(const exception& e)
    {
        cout << "caught exception: " << e.what() << endl;
    }
}
