#include<iostream>
#include<stdio.h>

//pass by value
//any changes done to parameters inside function will NOT reflect in original
void swap(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}

//call by address
//benefit is any changes done to parameters inside function will reflect in original
void swap_add(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

//call by reference-only in C++
void swap_ref(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    printf("The swapped values are %d and %d",a,b);
    swap_add(&a,&b);
    printf("\nThe swapped values are %d and %d",a,b);
    swap_ref(a,b);
    printf("\nThe swapped values are %d and %d",a,b);
}