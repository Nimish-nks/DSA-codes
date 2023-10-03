#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //struct Rectangle r;
    struct Rectangle r={10,5};
    r.length = 15;
    r.breadth = 10;

    cout<<"The area of rectangle is "<<r.breadth*r.length;


    return 0;
}