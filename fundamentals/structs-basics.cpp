#include <cstdio>
#include <iostream>

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
} hekk = {1, 2, 3};

int main()
{
    struct len l = {3, 9};
    l.a = 23;
    printf("area of rectangle: %d\n", (l.a * l.b));
    std::cout << "hekk.name: " << hekk.name << " hekk.color: " << hekk.color << std::endl;
}
