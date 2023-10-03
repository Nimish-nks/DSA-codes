#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle
{
private:
    /* data */
    int length;
    int breadth;
public:
    
    Rectangle(int l,int b);
    int area();
    ~Rectangle();
};


Rectangle:: Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}


int Rectangle::area()
{
    return length*breadth;
}

Rectangle::~Rectangle()
{

}

int main()
{
    Rectangle r(10,5);

    cout<<r.area();
    return 0;
}
