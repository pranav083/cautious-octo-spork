// code for binary search and linear search
#include <iostream>
using namespace std;

#ifndef OJ
#define OJ                                             \
    (void)!freopen("../../../input.txt", "r", stdin);  \
    (void)!freopen("../../../error.txt", "w", stderr); \
    (void)!freopen("../../../output.txt", "w", stdout);
#endif
struct Array
{
    int *a;
    int size;
    int length;
    int keyword;
    int found;
};
void insert_data(struct Array *arry)
{
    for (int i = 0; i < arry->size; i++)
    {
        cin >> arry->a[i];
        arry->length++;
    }
}
void display(struct Array *arry)
{
    cout<<arry->length<<endl;
    for(int i = 0; i<arry->length; i++)
        cout<<arry->a[i]<<" ";
    cout<<endl;
}
int linear_search(struct Array *arry)
{
    for (int i = 0; i < arry->length; i++)
    {
        if (arry->a[i] == arry->keyword)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(struct Array *arry)
{
    int mid;
    int h = arry->length;
    int l = 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arry->a[mid] == arry->keyword)
            return mid;
        else if (arry->a[mid] > arry->keyword)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    OJ;
    struct Array a;
    a.length = 0;
    cout<< "size of array : ";
    cin>>a.size;
    a.a = new int[a.size];
    insert_data(&a);
    display(&a);
    a.keyword = 5; 
    a.found = linear_search(&a);
    if(a.found == -1)
        cout<<"not found"<<endl;
    else
        cout<<"found at index : "<< a.found<<endl;    

    a.found = binary_search(&a);
    if(a.found == -1)
        cout<<"not found"<<endl;
    else
        cout<<"found at index : "<< a.found<<endl;    
}