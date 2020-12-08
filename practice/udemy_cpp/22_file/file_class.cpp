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
    Rectangle r1;

    ofstream ofs("file_class.txt", ios::app);
    ifstream ifs;
    ifs.open("file-class.txt");
    r1.setLength(2);
    r1.setbreadth(4);
    ofs<<r1;
    ifs>>r1;
    cout<<ifs;
    ofs.close();
    ifs.close();
}