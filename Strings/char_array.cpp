#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
//char X[5]; //declaring 5 character array
char y[]={'A','B','C','D','E'};
char X[5]={65,66,67,68,69}; //ascii codes for above char
char Z[5]={'A','B'}; //rest characters will be 0

printf("%c", X);

cout<<endl<<y;
cout<<endl<<Z;
return 0;
}