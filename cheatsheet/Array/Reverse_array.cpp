#include<iostream>
int main()
{
int A[5] = {2,4,6,8,10};
int B[5] ={0};
int i,j; 
//let's reverse it
int length=5;
for(i=length-1, j=0;i>=0,j<length;i--,j++)
{
    B[j]=A[i];

}
for(i=0;i<length;i++)
printf("%d ",B[i]);

return 0;
}

