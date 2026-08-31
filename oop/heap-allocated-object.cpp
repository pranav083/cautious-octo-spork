#include <iostream>
using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class Reactangle
{
private:
    /* data */
public:
    Reactangle(void);
    ~Reactangle();
    int breath;
    int length;
    int area(){
        return length*breath;
    }
    int perimeter(){
        return 2*(length+breath);
    }
};

Reactangle::Reactangle(void)
{
}

Reactangle::~Reactangle()
{
}

int main()
{
    Reactangle *r1 = new Reactangle;
    r1->length = 20;
    r1->breath = 20;
    cout<<r1->area()<<"  "<<r1->perimeter();   
    return 0;
}