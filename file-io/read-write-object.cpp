#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l,int b);
    ~Rectangle();
    void setLength(int l);
    void setbreadth(int b);
    int getLength();
    int getbreadth();
    int area();
    int perimeter();
    friend ofstream & operator<<(ofstream &ofs, Rectangle &r);
    friend ifstream & operator>>(ifstream &ifs, Rectangle &r);
};

Rectangle::Rectangle(){
    setLength(0);
    setbreadth(0);
}

Rectangle::Rectangle(int l , int b )
{
    setLength(l);
    setbreadth(b);
}

Rectangle::~Rectangle()
{
    cout<<"the class object is deleted"<<endl;
}

void Rectangle::setLength(int l){
    length = l;
}

void Rectangle::setbreadth(int b){
    breadth = b;
}

int Rectangle::getLength(){
    return length;
}

int Rectangle::getbreadth(){
    return breadth;
}

int Rectangle::area(){
    return getLength()*getbreadth();
}

int Rectangle::perimeter(){
    return 2 * (getLength()*getbreadth());
}

ofstream & operator<<(ofstream &ofs, Rectangle &r){
    ofs<<r.getLength()<<endl;
    ofs<<r.getbreadth()<<endl;
    ofs<<r.area()<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Rectangle &r){
    int area;
    ifs>>r.length;
    ifs>>r.breadth;
    ifs>>area;
    return ifs;
}

int main() {
    Rectangle r1(2, 4);

    ofstream ofs("rectangle.txt", ios::trunc);
    ofs << r1;
    ofs.close();

    Rectangle r2;
    ifstream ifs("rectangle.txt");
    ifs >> r2;
    ifs.close();

    cout << "read back -> length: " << r2.getLength()
         << ", breadth: " << r2.getbreadth() << endl;
}