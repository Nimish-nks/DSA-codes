#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};
//defining structure to allocate memory in heap

struct Square
{
    int side;
};

int main()
{
    struct Rectangle r={10,5};
    struct Rectangle *p= &r;
    struct Square *s;     
    s=new struct Square;  //making memory in heap
    s->side=70;
    cout<<"The side of square is "<<r.length;
    r.length=15;
    cout<<"\nThe length is "<<r.length;
    p->length=20;
    cout<<"\nThe length is "<<p->length;
    (*p).breadth =8;
    cout<<"\nThe breadth is "<<p->breadth;

    return 0;
}