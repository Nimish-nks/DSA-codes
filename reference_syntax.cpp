#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int &r = a; //reference variable declaration, it uses same memory location as a


    cout<<r;
    cout<<"\n"<<a;
    return 0;
}