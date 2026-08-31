#include <iostream>

using namespace std;

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
    ~Basic_car();
};

Basic_car::Basic_car(){
    a = 0;
    b = 0;
}
Basic_car::Basic_car(int a, int b)
{
        this->a = a;
        this->b = b;
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
    Derived_car(int a = 0, int b = 0, int c = 0, int d = 0);
    void fun3(){
        cout<<"this derived function 3"<<endl;
    }
    void fun4(){
        cout<<"this derived function 4"<<endl;
    }
    ~Derived_car();
};

Derived_car::Derived_car(int a, int b, int c, int d):Basic_car(a , b)
{
        this->c = c;
        this->d = d;
}

Derived_car::~Derived_car()
{
}


int main(){
    Derived_car d;
    Basic_car *ptr = &d;
    ptr->fun1();
}
