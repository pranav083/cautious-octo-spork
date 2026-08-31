#include<iostream>

void fun(int r);

int main()
{
    int a = 2;
    int &b = a;                 // it is a referce 
    b = 39;
    std::cout<<b<< " "<<a;
}