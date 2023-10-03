#include<iostream>
#include<stdio.h>
//by default array is passed as call by address
void fun(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{
    int A[5]={2,4,6,8,80};
    fun(A,5);
    return 0;
}