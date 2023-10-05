#include<iostream>

int main()
{
//int A[5];
int B[6]={0}; //all elemets are zero
int A[5]={2,4,6,8,9};
for(int i=0;i<5;i++)
{
    printf("%d ",A[i]);
}
return 0;
}

//Creating array in heap
/*int*p;
p=new int[5]; //in C++
p=(int *)malloc(5*sizeof(int)); //in C
*/