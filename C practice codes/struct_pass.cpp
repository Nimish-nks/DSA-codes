#include<iostream>
#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;

};

//call by value
int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}

//call by address
int area_add(struct Rectangle *r1)
{
    return r1->length*r1->breadth;
}

//call by reference
int area_ref(struct Rectangle &r1)
{
    return r1.length*r1.breadth;
}

int main()
{
    struct Rectangle r={10,5};
    printf("%d",area(r));
    printf("\n %d",area_add(&r));
    printf("\n %d",area_ref(r));
}
