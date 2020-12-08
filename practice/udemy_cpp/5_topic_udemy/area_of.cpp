#include<bits/stdc++.h>
// using namespace std;
// #define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

float area_rectangle(float a , float b);
float area_triangle(float a , float b);
float sum_of_the_natural_no(float a);

int main()
{
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout);
    float a, b;
    float c;
    std::cout<<"enter the area parameter"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"area of the rectangle is "<<area_rectangle(a, b)<<std::endl;
    std::cout<<"area of the triangle  is "<< area_triangle(a, b)<<std::endl;
    std::cout<<"sum of the natural no.is "<<sum_of_the_natural_no(a)<<std::endl;
    return 0;
}

float area_rectangle(float a, float b) {
    return a*b;
}

float area_triangle(float a, float b) {
    return a*b*0.5;
}

float sum_of_the_natural_no (float a) {
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        sum = sum + i;
    } 
    return (int)sum;
}