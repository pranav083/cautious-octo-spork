#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("myfile.txt", ios::trunc);
    outfile<<"give"<<endl;
    outfile<<"out "<<endl;
    outfile.close();
}