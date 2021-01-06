// this code is about how to define an array in program
#include<iostream>

using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
struct Array
{
    int *a;
    int size;
    int length;
};

void entry_data(struct Array arry)
{
    for (int i = 0; i < arry.size; i++)
    {
        cin>>arry.a[i];
        cout<<arry.a[i]<<endl;
    }
}
void display_arry(struct Array arry)
{

    for(int i = 0; i< arry.size; i++)
    {
        cout<<arry.a[i]<<endl;
    }
}

int main()
{   OJ;
    struct Array arry;
    cout<<"enter the size of the array";
    cin>>arry.size;
    arry.a = new int[arry.size];
    arry.length = 0;
    entry_data(arry);    
    display_arry(arry);
}