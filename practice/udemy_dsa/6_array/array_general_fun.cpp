// This code is about the general functions that are use in array using classes
#include<iostream>
 
using namespace std;

#ifndef OJ
#define OJ \
    (void)!freopen("../../../input.txt", "r", stdin); \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
class Array
{
private:
    int *a;
    int size;
    int length;
    int keyword;
public:
    Array();
    Array(int s);
    int getSize();
    void setSize(int s);
    int getLength();
    void setLength(int l);
    int getIndexData(int index);
    void setIndexdata(int index);
    void initArray(int s = -1);
    void displayArray();
    void insertArray();
    int getMax();
    int getMin();
    int getSum();
    int getAvg();
    void shiftLeft(int no_of_shift);
    void shiftRight(int no_of_shift);
    void rotateLeft(int no_of_rotate);
    void rotateRight(int no_of_rotate);
    void reverseArray();
    void sortArray();
    ~Array();
};
Array::Array()
{
    size = 10;                      // assuming size to be 10
    length = 0;                     // no data so size is zero    
    a = new int[size];
}
Array::Array(int s)
{
    if(s >=0)
        size = s;
    else
    {
        cout<<"invalid size";
    }
    length = 0;
    a = new int[size];
}
int Array::getSize()
{
    return size;
}
void Array::setSize(int s)
{
    if(s >= 0)
        size = s;   
}
int Array::getLength()
{
    return length;
} 
void Array::setLength(int l)
{
    if(l >=0)
        length = 0;
}
int Array::getIndexData(int index)
{
    if(size > 0 && length <= size)
        if(index >=0)
        {
            return a[index];
        }
        else 
        {
            cout<<"incorrect index"<<endl;
            return -1;
        }
    else
    {
        cout<<"incorrect size or length"<<endl;
        return -1;
    }
    
}

Array::~Array()
{
    delete[] a;
}

int main()
{   OJ;
     
}