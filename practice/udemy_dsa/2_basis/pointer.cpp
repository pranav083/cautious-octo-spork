#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 3;
    int *p ;
    int *q ;
    p = &a;

    q = (int *)malloc(5 *sizeof(int));
    q[0] = 8;
    int *r;
    r = new int;
    r[0] = 8;
    char *t;
    printf(" see pointer  and data %d", *p);
    printf(" see pointer  and data %d", *q);
    printf(" see pointer  and data %d", *r);
    cout<<endl<<sizeof(t)<<endl<<sizeof(r);
    delete(q);
    delete(r);
}