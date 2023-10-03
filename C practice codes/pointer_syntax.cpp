#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a=115;
    int *p,*m;   //initialize pointer
    p= &a;    //store address of a in p
    //allocating memory from heap
    m=new int[5]; //array of 5 elements
    
    printf("%d \n",a);
    printf("%d",*p);  //to print pointer use star, this prints value stored at address p
    free(m); //to delete memory
    



    return 0;
}