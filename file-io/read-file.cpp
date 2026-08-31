#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream ffile;
    ffile.open("file_1.txt");
    string str;
    int hell;
    ffile>>str;
    ffile>>hell;
    cout<<str<<" "<<hell<<endl ;
    if(ffile.eof())cout<<"end of file";
    ffile.close();


}