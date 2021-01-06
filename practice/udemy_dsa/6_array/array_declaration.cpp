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

void append (struct Array *arry , int x)
{
    if(arry->length < arry->size)
    {
        arry->a[arry->length++] = x;
    }
} 

void insert(struct Array *arry, int index, int value)
{
    if(arry->size >= index && index >= 0 )
    {
        for (int i = arry->length ; i<index; i--)
            arry->a[i] = arry->a[i-1];
        arry->a[index] = value;
        arry->length++;
    }
}
void entry_data(struct Array *arry)
{
    for (int i = 0; i < arry->size; i++)
    {
        cin>>arry->a[i];
        cout<<arry->a[i]<<endl;
        arry->length++;
    }
}
void delete_data(struct Array *arry, int index)
{
    if (index>=0 && index <= arry->length)
    {
        for(int i= index; i< arry->length; i++) // as only the first line of the loop will be executed
            arry->a[i] = arry->a[i + 1];
        arry->length--;
    }
}
void display_arry(struct Array arry)
{
    for(int i = 0; i< arry.size; i++)
        cout<<arry.a[i]<<endl;
}

int main()
{   OJ;
    struct Array arry;
    cout<<"enter the size of the array";
    cin>>arry.size;
    arry.a = new int[arry.size];
    arry.length = 0;
    entry_data(&arry);
    insert(&arry, 3,299);
    delete_data(&arry, 2);    
    display_arry(arry);
}