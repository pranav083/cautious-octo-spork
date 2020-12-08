#include<iostream>
#include<cmath>

float root(int a,int b,int c)
{
    float root1;
    
    root1=(-b*(sqrt((b*b)+(4*a*c))))/(2*a); //Write expression here, remove this comment
    
    return root1;
}
int main() {
    int a = 1;
    int b = -6;
    int c = 9;
    std::cout<<"area"<<root(a,b,c);
}