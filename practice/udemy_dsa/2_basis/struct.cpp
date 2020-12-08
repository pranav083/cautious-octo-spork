#include<iostream>

struct len
{
    int a;
    int b;
};
struct cards
{
    int color;
    int name;
    int code;
}hekk = {1,2,3};

int main()
{
    struct len l = {3,9};
    struct len b ;
    struct cards c[52];
    struct cards g;
    l.a = 23;
    printf("area of rectangle: %d",(l.a*l.b) );
    std::cout<<"hekk"<<g.name<<" "<< hekk.color;
}