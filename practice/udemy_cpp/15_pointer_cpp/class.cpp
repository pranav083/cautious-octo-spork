#include<bits/stdc++.h>
using namespace std;
int fun3();
class Basic_car
{
private:
    int a;
    int b;
public:
    Basic_car();
    Basic_car(int a, int b);
    void fun1(){
        cout<<"this function 1"<<endl;
    }
    void fun2(){
        cout<<"this function 2"<<endl;
    }    
    friend int fun3();
    ~Basic_car();
};

Basic_car::Basic_car(){
    int a = 1;
    int b = 1;
}
Basic_car::Basic_car(int a = 0, int b = 0)
{
        a = a;
        b = b;
}

Basic_car::~Basic_car()
{
}

class Derived_car : public Basic_car
{
private:
    int c;
    int d;
public:
    Derived_car(int a , int b, int c, int d);
    void fun3(){
        cout<<"this derived function 3"<<endl;
    }    
    void fun4(){
        cout<<"this derived function 4"<<endl;
    }    
    ~Derived_car();
};

Derived_car::Derived_car(int a = 0, int b = 0, int c = 0, int d = 0):Basic_car(a , b)
{
        c = c;
        d = d;
}

Derived_car::~Derived_car()
{
} 


int  main(){
    // Basic_car b;
    Derived_car d;
    Basic_car *ptr=&d;
    ptr->fun1();
    // ptr->fun3();


}