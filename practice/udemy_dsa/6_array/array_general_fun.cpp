// This code is about the general functions that are use in array using classes
#include <iostream>

using namespace std;

#ifndef OJ
#define OJ                                             \
    (void)!freopen("../../../input.txt", "r", stdin);  \
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
    bool validate(int n);
    int swap(int *a,int *b);
    int getSize();
    void setSize(int s);
    int getLength();
    void setLength(int l);
    int getIndexData(int index);
    void setIndexdata(int index);
    void initArray(int s);
    void displayArray();
    void insertArray();
    int getMax();
    int getMin();
    int getSum();
    int getAvg();
    void deletelement(int index);
    void shiftLeft(int no_of_shift);
    void shiftRight(int no_of_shift);
    void rotateLeft(int no_of_rotate);
    void rotateRight(int no_of_rotate);
    void reverseArray();
    void selectionSortArray();
    ~Array();
};

Array::Array()
{
    size = 10;  // assuming size to be 10
    length = 0; // no data so size is zero
    a = new int[size];
}
Array::Array(int s)
{
    if (s >= 0)
        size = s;
    else
    {
        cout << "invalid size";
    }
    length = 0;
    a = new int[size];
}
bool Array::validate(int n)
{
    if (n > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Array::swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}
int Array::getSize()
{
    return size;
}
void Array::setSize(int s)
{
    if (validate(s))
        size = s;
    else
    {
        cout << "wrong input" << endl;
    }
}
int Array::getLength()
{
    return length;
}
void Array::setLength(int l)
{
    if (l >= 0)
        length = 0;
}
int Array::getIndexData(int index)
{
    if (size > 0 && length <= size)
        if (index >= 0)
        {
            return a[index];
        }
        else
        {
            cout << "incorrect index" << endl;
            return -1;
        }
    else
    {
        cout << "incorrect size or length" << endl;
        return -1;
    }
}
void Array::initArray(int s)
{
    if (validate(s))
    {
        size = s;
        a = new int[size];
    }
}
void Array::displayArray()
{
    for (int i = 0; i < length; i++)
    {
        cout << a[i];
    }
}
void Array::insertArray()
{
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        length++;
    }
}
int Array::getMax()
{
    int Max = a[0];
    for (int i = 0; i < length; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    return Max;
}
int Array::getMin()
{
    int Min = a[0];
    for (int i = 0; i < length; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    return Min;
}
int Array::getSum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int Array::getAvg()
{
    int avg = getSum();
    return avg / length;
}
void Array::deletelement(int index)
{
    if (validate(index))
    {
        for (int i = index; i < length; i++)
        {
            a[i] = a[i + 1];
        }
        length--;
    }
}
void Array::shiftLeft(int no_of_shift)
{
    if (validate(no_of_shift))
    {
        for (int j = 0; j < no_of_shift; j++)
        {
            for (int i = 0; i < length; i++)
            {
                a[i] = a[i + 1];
            }
            length++;
        }
    }
}
void Array::shiftRight(int no_of_shift)
{
    if(validate(no_of_shift))
    {
        for(int j = 0; j < no_of_shift; j++)
        {
            for(int i = 0; i < length; i++)
            {
                a[i + 1] = a[i];
            }
            a[0] = 0;
            if(size >= length)
                length++;
            else
            {
                cout<<"further shift not possible";
            }
            
        }
    }
}
void Array::rotateLeft(int no_of_shift)
{
    int temp;
    if(validate(no_of_shift))
    {
        for(int j = 0; j<no_of_shift; j++)
        {
            temp = a[0];
            for(int i = 0; i < length; i++)
            {
                a[i] = a[i+1];
            }
            a[length-1] = temp;
        }
    }
}
void Array::rotateRight(int no_of_shift)
{
    if (validate(no_of_shift))
    {
        int temp;
        for(int j = 0; j<no_of_shift; j++)
        {
            temp = a[length-1];
            for (int i = 0; i<length-1; i++)
            {
                a[i + 1] = a[i];
            }
            a[0] = temp; 
        }
    }
}
void Array::reverseArray()
{
    for(int i =  0; i<length/2;i++)
    {
        swap(&a[i], &a[length-i-1]);
    }
}
void Array::selectionSortArray()
{
    for(int j = 0; j< length-1; j++ )
    {
        int min = j;
        for(int i = 0; i < length-1; i++)
        {
            if(a[i]< a[min])
            {
                min = i;
            }
        } 
        if(min !=j)
        {
            swap(&a[min],&a[j]);
        }
    }

}
Array::~Array()
{
    delete[] a;
}

int main()
{
    OJ;
    Array hello;
    int s;
    cin>>s;
    hello.setSize(6);
    int j;
    j = hello.getSize();
    cout<<hello.getSize()<<" "<<j<<endl;

}